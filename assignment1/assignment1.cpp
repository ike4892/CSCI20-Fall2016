// Kasey Koch
// Assignment 1
// Date created - 9/12/2016
// Date last worked on - 9/12/2016

  #include <iostream>
  using namespace std;
  
   int main()
  {
      
  int hours = 0;
  float wage = 0;
  string firstName = "";
  string lastName = "";
  float net = 0;
  float gross = 0;
  float tax = 0;
  
  
  cout<<"What is your first name? ";
  cin>>firstName;
  cout<<"What is your last name? ";
  cin>>lastName;
  cout<<"How many hours did you work this week? ";
  cin>>hours;
  cout<<"What is your current hourly wage? ";
  cin>>wage;
  
  gross = hours * wage;
  
  tax = gross * 0.17;
  
  net = gross - tax;
  
  cout<<firstName<<" "<<lastName<<" your net pay is $"<<net<<" you paid $"<<tax<<" in taxes and your gross pay is $"<<gross ;
  
  return 0;
  }