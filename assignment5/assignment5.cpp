/* Kasey Koch
* Assignment 5
* 12/5/2016 */



//Included libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

//DESCRIPTION:
class Player{
public:
//describe this function
    Player() : score(0), name(""){}
    Player(string s) : score(0), name(s){} 
    
//Player getters and setters
    void setName(string n){ name = n; }  //set score
    string getName(){ return name; }    //get name
    
    void setScore(int s){ score = s; }  //set score
    int getScore(){ return score; }     //get score


    void addScore(int newScore){
        score += newScore;
        
    }
private:
   int score;
   string name;
};


class Dice{
public:
    Dice() : prevRoll(0){}
    
//Dice getters and setters
    void setPrevRoll(int r){ prevRoll = r; }
    int getPrevRoll(){return prevRoll; }
   
//generate a roll
   int generateRoll(){
    srand(time(0));
    prevRoll = ((rand() % 6) + 1);
    return prevRoll;
   }
private:
    int prevRoll;
   
};



class GameMode{
public:
    GameMode(int p){
        scoreToAdd = 0;
        playerNum = p;
    }
    
    //setters and getters
    void addPlayers(int p, string s[]){
        for(int i = 0; i < p; i++){
            playerControllers.push_back(Player(s[i]));
        }
    }
    void addScore(int p, int s){
        playerControllers[p].addScore(s);
    }
    int getPlayerNum(){ return playerNum; }
    int getScoreToAdd(){ return scoreToAdd; }
    void setScoreToAdd(int s){ scoreToAdd = s; }
    void setPlayerName(int index, string n){ playerControllers[index].setName(n); }
    int getPrevRoll(){ return dice.getPrevRoll(); }
    
    //sequence vector fucntions
    void addToSequence(){
        int roll = dice.generateRoll();
        sequence.push_back(roll);
    }
    
    void clearSequence(){ sequence.clear(); scoreToAdd=0; }
    
    void sumTheSequence(){
        for (int i = 0; i < sequence.size(); i++){
            scoreToAdd += sequence[i];
        }
    }

   
    //check if the roll is 1
    bool checkOne(){
        if (sequence.back() == 1){
            clearSequence();
            return true;
        }else{
            return false;
        }
    }
    
    Player getPlayer(int playerIndex) const{
        return playerControllers[playerIndex];
    }
    
 
    
    bool checkScore(Player player){
           if(player.getScore() >= 100){
               return true;
           }else{
               return false;
           }
    }
    
    bool isWin(int currentPlayer){
            if (checkScore(getPlayer(currentPlayer-1)) == true){
                cout << "\nPlayer " << getPlayer(currentPlayer-1).getName() << " Won!" << endl;
                return true;
            }
        return false;
    }
    
private:
    Dice dice;
    
    int scoreToAdd;
    int playerNum;
    
    vector<Player> playerControllers;
    vector<int> sequence;
};


//Main program here
int main(){
  
    int maxPlayers = 4;
    int playerNum = 0;
    string name = "";
    int menuInput = 0; // 1 - hold, 2 - roll again, 3 - Play Again, 0 - close game
    bool checkOne = false;
    string names[maxPlayers];
  
    //menu begin
    cout << "Welcome to Pig how many players today?" << endl;
    cin>>playerNum;
        
    GameMode* game = new GameMode(playerNum);
    
    
    for(int i = 0; i < playerNum; i++){
        name = "";
        cout <<"What would you like your name to be, player " << i+1 << "?" << endl;
        cin  >>name;
        names[i] = name;
    }
    
    game->addPlayers(playerNum, names);
   
    
    //play the game 
    do{
        int currentPlayer = 1;
        do{
            menuInput = 0;
            checkOne = false;
            cout <<"Player " << game->getPlayer(currentPlayer-1).getName() << "'s turn:" << endl;
            cout << "Current score: " << game->getPlayer(currentPlayer - 1).getScore() << endl;
            game->addToSequence();
            checkOne = game->checkOne();
            
            cout << "You rolled: " << game->getPrevRoll() << endl;
            if(checkOne == true){
                if(currentPlayer == playerNum){
                    currentPlayer = 1;
                    game->clearSequence();
                }else{
                    currentPlayer++;
                }
            }else{
                while(checkOne != true){
                    menuInput = 0;
                    cout << "Would you like to hold(1) or roll again(2)?" << endl;
                    cin >> menuInput;
                    switch(menuInput){
                        case 1: 
                            game->sumTheSequence();
                            game->addScore(currentPlayer-1, game->getScoreToAdd());
                            checkOne = true;
                            //cout << "You rolled: " << game->getPrevRoll() << endl;
                            if(currentPlayer == playerNum){
                                currentPlayer = 1;
                                game->clearSequence();
                            }else{
                                currentPlayer++;
                            }
                            game->clearSequence();
                            break;
                        case 2:
                            game->addToSequence();
                            cout << "You rolled: " << game->getPrevRoll() << endl;
                            checkOne = game->checkOne();
                            break;
                        default:
                            break;
                    }
                }
            }
        
        }while(game->isWin(currentPlayer) != true);
        
        cout << "Press (0) to close or anything else to play again..." << endl;
        cin >> menuInput;
        for(int i=0; i<playerNum;i++){
            game->getPlayer(i).setScore(0);
        }
        
        
    }while(menuInput != 0);
    //menu end (if player does not want to continue)
    //close program
    return 0;
}
