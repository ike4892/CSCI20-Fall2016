// Kasey Koch
// 9/26/2016
// Lab 9


  #include <iostream>
  using namespace std;
  
  class TemperatureConverter {
      
      private: 
      
      double kelvin_;
      
      public:
      
      TemperatureConverter(){
        kelvin_ = 0;
      }
      TemperatureConverter(double tempKelvin){
        kelvin_ = tempKelvin;
      }
      void SetTempFromKelvin(double tempKelvin){
        kelvin_ = tempKelvin;
        
      }
      double GetTempFromKelvin(){
        return kelvin_;
      }
      void SetTempFromCelsius(double Celsius){
        kelvin_ = Celsius + 273.15;
    
      }
      double GetTempAsCelsius(){
        return kelvin_ - 273.15;
        
      }
      void SetTempFromFahrenheit(double Fahrenheit){
        kelvin_ = (5 * (Fahrenheit - 32)/9) + 273.15;
        
      }
      double GetTempAsFahrenheit(){
        return ((GetTempAsCelsius()*9)/5 + 32);
      
      }
      void PrintTemperatures(){
         cout<<" Kelvin: "<<kelvin_ <<" Celsius: "<<GetTempAsCelsius() <<" Fahrenheit: "<<GetTempAsFahrenheit();
      }
      

};
       
      
      
   

   

 
int main ()
{
    TemperatureConverter temp1; //testing default constructor
   TemperatureConverter temp2(274); //testing overloaded constructor
    
   temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
};