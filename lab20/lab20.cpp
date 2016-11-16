#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
                char firststr[10]; // pointee (I think)
                int firstname = 0;
                char *head = firststr; //assigns pointer
                char *tail = firststr; //assigns pointer
                
                
                cout << "Please enter a 10 letter word or less" << endl;
                
                cin >> firststr;
                
                strlen(firststr); // returns the length of the string
                
                firstname = strlen(firststr); // sets int firstName to the length of the string
                
                cout << "Your word is " << firststr << endl;
                
                if (firstname<10) // only runs if word is less than 10 characters
                {
                                while (*head != '\0') // loops every character in head until it reaches the null termination
                                {
                                                cout << *head;
                                                head++; 
                                }
                }
                else
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; // if larger than 10 give error
                }
               
                cout << endl;
                
                tail = &firststr[strlen(firststr) - 1]; //pass by refrence used to completely change the data of firststr to now be displayed backwards
               
                if (firstname < 10)
                {
                                while (*tail>0) // since it is reading backwards it goes until the min rather than the max
                                {
                                                cout << *tail;
                                                tail--;
                                }
               
                }
                
                cout << endl;
                
                head = firststr; //getting the data of head 
               
                tail = &firststr[strlen(firststr) - 1]; // getting the data of tail
               
                head++; //running every piece of the head string 
               
                tail--; // running every piece of the tail string
                
                if (*head == *tail) // using the information it gathered directly above it checks to see if the word remains the same even though one is just the other backwards 
                {
                                cout << "It is an palindrome!" << endl;
                }
                else
                {
                                cout << "It is not an palindrome" << endl;
                }
 
                return 0;
}