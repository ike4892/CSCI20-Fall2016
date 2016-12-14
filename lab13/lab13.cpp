/* Kasey Koch
* lab 13
* 12/12/2016 */

  #include <iostream>
  using namespace std;
  
  int main(){
      int startHour = 1;
      int endHour = 0;
      int minute = 0;
      
      while (startHour >= 1 && startHour < 3){
          if (minute < 59 ){
              cout<<startHour<< ":" << minute ++<<endl;
          }
          else {
              minute = 0;
              cout<<startHour ++<<":00"<<endl;
          }
      }
      
      cout<< "Please Insert a Starting Hour:  ";
      cin>>startHour;
      
      cout<< "Plaese Insert a Ending Hour: ";
      cin>>endHour;
      
      while   (startHour < endHour){
          if (minute < 59 ){
              minute += 15;
              cout<<startHour<< ":"<< minute<<endl;
         
          }
          else {
              minute = 0;
              cout<<startHour++<<":00"<<endl;
          }
      }
        
  }