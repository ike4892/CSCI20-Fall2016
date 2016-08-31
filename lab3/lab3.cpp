// Kasey Koch
// 8/31/2016
// Lab 3


  #include <iostream>
  using namespace std;
  
  int main()
  {
      int coins = 0;
      int quarters = 0 ;
      int dimes = 0 ;
      int nickels =  0;
      int pennies = 0;
      int fee = 0 ;
      int feeOutput = 0 ;
      int coinsCash = 0;
      int coinsCents = 0;
      int feeTotal = 0;
      int feeCash = 0;
      int feeCents = 0;
      
      
      cout<<"Welcome to CoinStar insert coins below"<<endl;
      cin>>coins;
      
      quarters = coins / 25;
      
      dimes = coins % 25 / 10;
      
      nickels =  coins % 10 / 5 ;
      
      pennies = coins % 5 ;
      
      coinsCash = coins / 100;
      
      coinsCents = coins % 100;
      
      fee = coins * .109;
      
      feeTotal = coins - fee;
      
      feeCash = feeTotal / 100;
      
      feeCents = feeTotal % 100;
      
      
       

      
      cout<<quarters<< " quarters "<<endl;
      cout<<dimes<< " dimes "<<endl;
      cout<<nickels<< " nickels "<<endl;
      cout<<pennies<< " pennies "<<endl;
      
      cout<<"the total is $"<<coinsCash<<"."<<coinsCents<<" after the fee you get $"<<feeCash<<"."<<feeCents<<endl;
      
      return 0;
      
  }
 