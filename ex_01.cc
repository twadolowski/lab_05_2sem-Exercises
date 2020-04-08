#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main(){
	ifstream file1("01.txt");
	ifstream file2("02.txt");
	ofstream fileout("merge.txt");
	string line1, line2;
	
	if(!(file1.is_open() && file2.is_open())){
		exit(1);
	}
	while(getline(file1, line1) && getline(file2, line2)){
		fileout << line1 <<"\n"<< line2<<"\n";
	}
	
	
	file1.close();
	file2.close();
	fileout.close();
	
	return 0;
	
}
