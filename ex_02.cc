#include <iostream>
#include <fstream>
using namespace std;

int main () {
  string line1;
  string line2;
  fstream file1 ("merged.txt");
  fstream file2 ("03.txt");
  bool flag = 1;

  if (file1.is_open() && file2.is_open()){

    while(getline(file1,line1)){
        getline(file2, line2);

        if (line1 != line2){
            flag = 0;
            break; 
        }
    }
    if(file1.eof() && file2.eof() && flag)
        cout << "Files are identical \n";
    else {
        cout << "Files are not identical \n";
        cout << "File 1: " << line1 << "\n";
        cout << "File 2: " << line2 << "\n";
    }

    file1.close();
    file2.close();
  }
}
