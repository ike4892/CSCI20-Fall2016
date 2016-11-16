/* Kasey Koch
* lab 19
* 11/09/2016 */

  #include <iostream>
  #include <string>
  #include <fstream>
  using namespace std;
  
  int main(){
      
      ifstream inFS;
      
      const int numRows = 4;
      const int numCols = 5;
      int fileNum = 0;
      int fileNumber[numRows][numCols];
      
      
      
      inFS.open("text.txt"); // opens the file
      if (!inFS.is_open()) {
        cout<<"Failed to open text file."<<endl;
        return 1; // 1 shows error
      }
      
      //Process input file:
      while(!inFS.eof() ) {
        for(int i = 0; i < (numRows - 1); i++){
          for(int j = 0; j < (numCols - 1); j++){
           inFS >> fileNumber[i][j];
           cout << fileNumber[i][j]<<" ";
              
            }
            cout << endl;
          }
        }
        
      inFS.close(); // closes the document
      
      cout << endl;
      
      //Process sum of rows:
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
          fileNum = fileNum + fileNumber[i][j];
        }
        fileNumber[i][4] = fileNum;
        fileNum = 0;
      }
      
      
      for(int i = 0; i < 3; i++){
          for(int j = 0; j < 5; j++){
           cout << fileNumber[i][j]<<" ";
          }
        cout << endl;
      }
      
      //Process sum of columns:
      
      
      //Create and output finished array:
      ofstream outfs;
      outfs.open("output.txt");
      
      
      return 0;
      }
  
   
      /*
      PSEUDOCODE:
      
      *File input
     * Create array (5 long, 4 wide)
      
     * Process the input of text.txt:
     * Store into array, end of line starts new row (remember to skip whitespaces!)
      
      Process the output of text.txt:
      FOR LOOP:
      array[N][4] => SUM of indexes 0 to 3 for N row index where N is 0 to 2
      
      FOR LOOP:
      array[3][N] => SUM of indexes 0 to 2 for N column index where N is 0 to 3
      
      Output the value of the resultant file output.txt
        Following format: 
          1 2 3 4 SUM_OF_ROW_ONE
          5 6 7 8 SUM_OF_ROW_TWO
          9 10 11 12 SUM_OF_ROW_THREE
          SUM_OF_COLUMN_ONE SUM_OF_COLUMN_TWO SUM_OF_COLUMN_THREE SUM_OF_COLUMN_FOUR
      */
      
      /*
      #include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	string s = "1 2 3 45 6 7 8 9";
	int x = 0;
	
	for(int i=0; i<s.length(); i++){
	    if(x = s[i]){
	        cout << "yeah boy: " << x << " " << s[i] << endl;
	    }else{
	        cout << "nope, whitespace\n";
	    }
	}
	return 0;
}

      */