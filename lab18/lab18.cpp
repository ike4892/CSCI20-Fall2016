/* Kasey Koch
* lab 18
* 11/07/2016 */

  #include <iostream>
  #include <string>
  using namespace std;
  
  
  int main(){
      
      string fName = ""; //fName input
      string lName = ""; //lName input
      

      bool completed = true;
      
      while (completed){
        
        if(fName.length() <=10 && fName.length() > 0){        //checking in put size for 10 or less (bigger than 0)
          if (lName.length() <= 20 && lName.length() > 0){    //checking input size for 20 or less (bigger than 0)
            completed = false;
          }
          else{
            cout<<"Please insert your Last name (20 characters max)"<<endl;
            cin>>lName;
          }
        }
        else{
          cout<<"Please insert your First name (10 characters max)"<<endl;
          cin>>fName;
        }
      }
      cout<<"Your available Usernames are: "<<endl;
     //Test Name: Kasey Koch
      cout<<fName<<lName<<endl;
      //Output: KaseyKoch
      cout<<fName[0]<<lName<<endl;
      //Output: KKoch
      cout<<fName<<lName[0]<<endl;
      //Output: KaseyK
      return 0;
      
  }