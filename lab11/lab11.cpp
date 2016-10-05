/* Kasey Koch
* 10/5/2016
* Lab 11
*/

#include <iostream>
using namespace std;


int main(){


string name = "";
string filingStatus = "";
double grossWages = 0.0;
double taxWitheld = 0.0;
double adjWage = 0.0;
double salary = 0.0;
double refund = 0.0;


cout<<" What is your name? "<<;
cin>>name>>endl;

cout<<" GrossWages: ";
cin>>grossWages>>endl;


cout<<" Witheld: ";
cin>>taxWitheld>>endl;

cout<<" Are you Single or Married? ";
cin>>fililngStatus>>endl;

if (filingStatus = Single){
    adjWage = grossWages - 3900 - 6100;
    
    else if(adjWage <= 8925, adjWage > 0){
        tax = adjWage * .10;
        
        }
    else if (adjWage >= 8926 && adjWage <= 36250){
        tax = 8892.50 + ((adjWage % 8925) * .15);
    }
    else if (adjWage >= 36251 && adjWage <= 87850){
        tax = 4991.25 + ((adjWage % 36250) * .25);
    }
    else if (adjWage >= 87851 ){
        tax = 17891.25 + ((adjWage % 87850) * .28);
        
    }
    else {
        cout<< " You have no Taxes "<<endl;
    }
    
}


else {
    adjWage = grossWages - 3900 - 3900 - 6100 - 6100;
    if (adjWage > 0 && adjWage <= 17850){
        tax = adjWage * .10;
    
    }
    else if(adjWage >= 17851 && adjWage <= 72500){
        1785 + ((adjWage % 17850) * .15);
    }
    else if(adjWage >= 72501){
        9982.50 + ((adjWage % 72500)* .28);
    }

salary = adjWage - tax;

if (tax > taxWitheld){
    cout<<" You owe :"<<(taxWitheld - tax)<<" more."<<endl;
}
else{ 
    
cout<<"you get a refund of: "<<refund = ((tax - taxWitheld) * -1);
}

cout<<name<<" : "<<endl;


cout<<salary<<" : "<<endl;


cout<<tax<<" owed : "<<endl;


cout<<name<<" is entitled to a refund of $"<<refund<<endl;






}