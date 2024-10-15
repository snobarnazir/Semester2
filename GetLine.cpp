#include <iostream>
#include <fstream>
using namespace std;
int main(){
/*	char name[20]={' '};
	int i=0;
	ifstream fin;
	fin.open("data.txt");
	while(!fin.eof()){
		fin.get(name[i]);
		i++;
	}
	cout<<name<<endl;
	
	*/
	/*	char name[20]={' '};
	    int age=0;
	    int num=0;
	ifstream fin;
	fin.open("data.txt");
	for(int i=0;i<2;i++){
		if(fin.is_open()){
		fin.getline(name,19,',');
		fin>>age;
		fin.ignore();
		fin>>num;
		fin.ignore();
		int result=age+num;
		cout<<name<<" "<<age<<" "<<num<<" "<<result<<endl;
		}
	
	}
		
	fin.close();	
	
*/

    char name[20]={' '};
    int i=0;
    ifstream fin;
    fin.open("data.txt");
    while(!fin.eof()){
    	fin.get(name[i]);
    	i++;
	}
	cout<<name<<endl;

























	
	return 0;
}