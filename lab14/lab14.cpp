#include <iostream>

using namespace std;

 int main() {
   
   // Declare variables
   
   int count = 0;
   
   int total = 0;
   
   int minimum;
   
   int grade;
   
   // Read numbers in until we see the -1   
   
   // Sum up grades as we do, and look for minimum
   
   
   
   
   cin >> grade;
   
   while ( grade != -1 ) {               
     
       
     if (grade < minimum) { 
       minimum = grade;
       
       
       }
       
     
     total = total + grade;
     
  
     
     count = count + 1;
     
    cin >> grade;
    
    
     
    }
  
         
       
     
         
       // Output results
       
       
       
       double average = total / count;
       
       cout << "Average was " << average << endl;
       
       cout << "Minimum was " << minimum << endl;
       
       return 0;
   
 }