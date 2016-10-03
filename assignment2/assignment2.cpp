// Kasey Koch
// Assignment 2
// 9/28/2016


 #include <iostream>
  using namespace std;
  
  class distance {
      private: 
      
      double inches;
      
      public:
      
       distance(){
        inches = 0;
       }
       distance(double inchesN){
        inches = inchesN;
      }
      void setDistanceAsInches(double inchesN){
        inches = inchesN;
      }
      double getDistanceinInches(){
        return inches;
      }
       void setDistanceFromFeet(double feet){
        inches = feet / 12;
       }
        double getDistanceAsFeet(){
        return inches * 12;
        }
        void setDistanceFromYards(double yards){
        inches = (yards / 3) / 12;
        }
        double getDistanceAsYards(){
        return getDistanceAsFeet() * 3;
        }
        void setDistanceFromMiles(double miles){
         inches = miles / 63360;
         
        }
        double getDistanceAsMiles(){
         return getDistanceAsYards() * 1760;
         
        }
        void setDistanceFromMeters(double meters){
        inches = meters / 39.3701;
        }
        double getDistanceAsMeters(){
         return inches * 39.3701;
        }
        void printDistances(){
         cout<<" inches: "<< inches<< " feet: "<<getDistanceAsFeet()<<" yards: "<<getDistanceAsYards()<<" miles: "<<getDistanceAsMiles()<<" meters: "<<getDistanceAsMeters()<<endl;
        
        }
      
      
  };
  int main (){
    
    distance dist1;
    
    dist1.printDistances();
    
    
    dist1.setDistanceAsInches(1);
    cout<<dist1.getDistanceAsFeet();
    dist1.printDistances();
    
   
    
   //temp1.PrintTemperatures();
   // temp2.PrintTemperatures();
    
   // temp1.SetTempFromKelvin(400.15); //testing mutator function
   // cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
  //  temp1.PrintTemperatures();
  //  
  //  temp2.SetTempFromCelsius(32); //testing other functions
  //  cout<<temp2.GetTempAsCelsius()<<endl;
  //  temp2.PrintTemperatures();
    
   // temp2.SetTempFromFahrenheit(32);
   // cout<<temp2.GetTempAsFahrenheit()<<endl;
   // temp2.PrintTemperatures();
    
    return 0;
};