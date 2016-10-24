/*Rock Paper Scissors Game:
* The computer chooses one of the three options and the user chooses one.
* The computer should determine who has won.
* game should play an option of best out of 3, 5, or 7 rounds.
* The program should score the game for the user based on how many they win.
* Kasey Koch
* assignment 3
* 10/19/2016 
*/


  #include <iostream>
  using namespace std;
  
  int main(){
      
      int userScore = 0;
      int compScore = 0;
      int userRps = 0;
      int compRps = 0;
      int gameMode = 0;
      
      
      cout<<"Welcome to Rock Paper Scissors! Would you like to play a Best of 3, 5 or 7? "<<endl;
      cout<<"Please insert 3 , 5 , or 7 to choose ";
      cin>>gameMode;
      
      if (gameMode == 3){
          
          while (userScore < 2 && compScore < 2){
          
          cout<<"Choose 1 for Rock, 2 for Paper, or 3 for Sciccors! ";
          cin>>userRps;
          compRps = (rand() % 3) + 1;
          
          if ( userRps == compRps){
              
              cout<<"Draw "<<endl;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
            
          }
          else if ( userRps == 1 && compRps == 2){
              
              cout<<"Paper covers Rock! "<<endl;
              compScore = compScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          
          else if ( userRps == 1 && compRps == 3){
              cout<<"Rock crushes Scissors! "<<endl;
              userScore = userScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          else if (userRps == 2 && compRps == 1){
              
              cout<<"Paper covers Rock! "<<endl;
              userScore = userScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
            
          }
          else if (userRps == 2 && compRps == 3){
              
              cout<<"Scissors cut Paper! "<<endl;
              compScore = compScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          else if (userRps == 3 && compRps == 1){
              
              cout<<"Rock crushes Scissors "<<endl;
              compScore = compScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          else if (userRps == 3 && compRps == 2){
              
              cout<<"Scissors cuts Paper! "<<endl;
              userScore = userScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
          }
          
      
         
        
         
          
           
           
          
          }
       if ( userScore == 2){
         cout<<" You Win! ";
       }
       else if ( compScore == 2){
         cout<<" You Lose! ";
       }
          
      }
      
      else if (gameMode == 5){
          
          while (userScore < 3 && compScore < 3){
          
          cout<<"Choose 1 for Rock, 2 for Paper, or 3 for Sciccors! ";
          cin>>userRps;
          compRps = (rand() % 3) + 1;
          
          if ( userRps == compRps){
              
              cout<<"Draw "<<endl;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
            
          }
          else if ( userRps == 1 && compRps == 2){
              
              cout<<"Paper covers Rock! "<<endl;
              compScore = compScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          
          else if ( userRps == 1 && compRps == 3){
              cout<<"Rock crushes Scissors! "<<endl;
              userScore = userScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          else if (userRps == 2 && compRps == 1){
              
              cout<<"Paper covers Rock! "<<endl;
              userScore = userScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
            
          }
          else if (userRps == 2 && compRps == 3){
              
              cout<<"Scissors cut Paper! "<<endl;
              compScore = compScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          else if (userRps == 3 && compRps == 1){
              
              cout<<"Rock crushes Scissors "<<endl;
              compScore = compScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          else if (userRps == 3 && compRps == 2){
              
              cout<<"Scissors cuts Paper! "<<endl;
              userScore = userScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
      }
         if ( userScore == 3){
         cout<<" You Win! ";
       }
       else if ( compScore == 3){
         cout<<" You Lose! ";
       }
      
      }
      
      else if (gameMode == 7){
          
          while (userScore < 4 && compScore < 4){
            
            cout<<"Choose 1 for Rock, 2 for Paper, or 3 for Sciccors! ";
          cin>>userRps;
          compRps = (rand() % 3) + 1;
          
          if ( userRps == compRps){
              
              cout<<"Draw "<<endl;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
            
          }
          else if ( userRps == 1 && compRps == 2){
              
              cout<<"Paper covers Rock! "<<endl;
              compScore = compScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          
          else if ( userRps == 1 && compRps == 3){
              cout<<"Rock crushes Scissors! "<<endl;
              userScore = userScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          else if (userRps == 2 && compRps == 1){
              
              cout<<"Paper covers Rock! "<<endl;
              userScore = userScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
            
          }
          else if (userRps == 2 && compRps == 3){
              
              cout<<"Scissors cut Paper! "<<endl;
              compScore = compScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          else if (userRps == 3 && compRps == 1){
              
              cout<<"Rock crushes Scissors "<<endl;
              compScore = compScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
          else if (userRps == 3 && compRps == 2){
              
              cout<<"Scissors cuts Paper! "<<endl;
              userScore = userScore + 1;
              cout<<"Player: "<<userScore<<" CPU: "<< compScore<<" "<<endl;
              
          }
               if ( userScore == 4){
         cout<<" You Win! ";
       }
       else if ( compScore == 4){
         cout<<" You Lose! ";
       }
            
          }
          
      }
  }
  