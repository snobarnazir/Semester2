#include <iostream>
#include <fstream>
using namespace std;
int main(){
	
	int count=0;
	int size=50;
	ifstream fin;
	fin.open("word.txt");
	ofstream fout;
	fout.open("word2.txt");
	char words[size]={' '};
	char result[size]={' '};
	
	for()
	
	 for(int i=0; i<=14;i++){
	 	
	 	fin>>words;
	 
	 	
	 	if(words==result){
	 		count=count+1;
		 }
		 fin.ignore();
	 	fout<<words<<count<<endl;
	 
	 		
	 	}
	 
	 
}