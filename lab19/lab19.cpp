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
            }
          }
      }
      
      cout << "input array: " << endl;
      for(int i = 0; i < 3; i++){
          for(int j = 0; j < 4; j++){
           cout << fileNumber[i][j]<<" ";
          }
        cout << endl;
      }  
        
      inFS.close(); // closes the document
      
      cout << endl;
      cout << "current array: " << endl;
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
      
      cout << endl;
      cout << "output array: " << endl;
      //Process sum of columns:
      for(int i = 0; i < 4; i++){
        for(int j =0; j < 3; j++){
          fileNum = fileNum + fileNumber[j][i];
        }
        fileNumber[3][i] = fileNum;
        fileNum = 0;
        
      }
      //clean the messy spot
      fileNumber[3][4] = 0;
      
      for(int i = 0; i < 4; i++){
          for(int j = 0; j < 5; j++){
           cout << fileNumber[i][j]<<" ";
          }
        cout << endl;
        
      }
      
      //Create and output finished array:
      ofstream outfs;
      outfs.open("output.txt");
      
      for(int i = 0; i < 4; i++){
          for(int j = 0; j < 5; j++){
           outfs << fileNumber[i][j] << " ";
          }
        outfs << endl;
        
      }
      
      
      return 0;
      }
  
   
      /*
      PSEUDOCODE:
      
      *File input
     * Create array (4 long, 5 wide)
      
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