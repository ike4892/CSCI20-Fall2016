/* Kasey Koch
* lab 16
* 10/31/2016 */

  #include <iostream>
  #include <string>
  using namespace std;
  
  int main(){
      
      const int menu = 10;
      string Sauce[menu];
      int inv[menu];
      double price[menu];
      int userSauce = 0;
      int userMenu = 0;
      double totalPrice = 0.00;
    
      int u = 0;
      
      Sauce[u] = "Salt & Vinegar";           inv[u] = 10;       price[u] = 0.00;    ++u;  
      Sauce[u] = "Sweet BBQ";                inv[u] = 10;       price[u] = 0.15;    ++u;
      Sauce[u] = "Lemon Pepper";             inv[u] = 10;       price[u] = 0.30;    ++u;
      Sauce[u] = "Teriyaki";                 inv[u] = 10;       price[u] = 0.45;    ++u;
      Sauce[u] = "Bourbon Honey Mustard";    inv[u] = 10;       price[u] = 0.60;    ++u;
      Sauce[u] = "Mild";                     inv[u] = 10;       price[u] = 0.75;    ++u;
      Sauce[u] = "Parmesan Garlic";          inv[u] = 10;       price[u] = 0.80;    ++u;
      Sauce[u] = "Medium";                   inv[u] = 10;       price[u] = 0.95;    ++u;
      Sauce[u] = "Chiopotle BBQ";            inv[u] = 10;       price[u] = 1.10;    ++u;
      Sauce[u] = "Honey BBQ";                inv[u] = 10;       price[u] = 1.25;    
        
    //userChoice greater than or equal to 0, and less than or equal to 9
      while (userMenu <= 9 && userMenu >= 0){
        userMenu = 0;
        
        cout<<"Which Sauce Would you Like? Choose 0-9 going least spicy to most. "<<endl;
        cout<<" Current Cart Total: "<<totalPrice<<endl;
        
        cout<<" insert a number greater than 9 to exit"<<endl;
        
        cin>>userMenu;
        
        if (userMenu <= 9 && userMenu >= 0){
          u = userMenu;
          
          inv[u] = inv[u-1];
          totalPrice = totalPrice + price[u];
          
          cout<<Sauce[u]<<" Sauce, "<<inv[u]<< " Remaining "<< price[u]<<" ea."<<endl;
        }
  
      }
          
          
      return 0;
      
  }