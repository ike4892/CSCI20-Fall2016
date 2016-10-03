/* Kasey Koch
*  10/3/2016
*  Lab 10
*/

  #include <iostream>
  using namespace std;
  
  int main(){
 
 int suzyAge = 25;
 int johnAge = 21;
 cout<<(suzyAge < johnAge);
 cout<<"suzyAge < johnAge is False because 25 is not less than 21"<<endl;
 
int x = 7;
int y = 7;
cout<<(x >= y);
cout<<" True, 7 is equal to or greater than 7 "<<endl;

int a = 1;
int b = 9;
cout<<(a == b);
cout<<" False, 1 is not equal to 9 "<<endl;

int limit = 20;
int count = 10;
cout<<((limit*count)/2>0);
cout<<" True, 15 is Greater than 0 "<<endl;

int t = -4;
int z = 0;
cout<<(t>5||z<2);
cout<<" True, Even though -4 is not greater than 5, 0 is still less than 2 and its asking for 'or' "<<endl;

int variable = -5;
cout<<(!(variable > 0));
cout<<" True, -5 is not greater than 0 but it is still true because its asking for what it is not "<<endl;


 a = 16;
cout<<(a/4<8&&a>=4);
cout<<" True, 4 is less than 8 and 16 is greater than or equal to 4 "<<endl;

 x=-2;
 y=5;
cout<<(x*y<10||y*z<10);
cout<<" True, -10 is less than 10 and by asking for 'or' only 1 statement must be true for the entire statement to be true "<<endl;

int j = -2;
int k = 5;
int l = 4;
cout<<(!(j * l < 10) || y/x * 4 < y*2);
cout<<" True, -8 is less than 10 but the second equation evaulates to a true statement (-10 is less than 10) "<<endl;
}