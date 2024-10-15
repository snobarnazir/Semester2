#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main(){
/*	ofstream fout;
	fout.open("FileHandling.txt");
	fout<<"welcome to jumangi"<<endl;
	fout<<"This is my first .txt file";
	fout.close();
	
	ofstream fout;
	fout.open("fileone.txt");
	for(int i=0;i<5;i++){
		fout<<"this is tottaly bullshit"<<endl;
	}
	fout.close();
	
	int age;
	float marks;
	char name[50]={' '};

	cout<<"Enter your fucking age"<<endl;
	cin>>age;
	cout<<"Enter your fucking nmarks"<<endl;
	cin>>marks;
	cout<<"Enter your fucking name"<<endl;
	cin.ignore();
	cin.getline(name,49);
	
	ofstream fout;
	fout.open("SecondFile.txt");
	fout<<name<<endl;
	fout<<age<<endl;
	fout<<marks<<endl;
	fout.close();
	
	ifstream fin;
	fin.open("Readme.txt");
	
	int age=0;
	float marks=0.0;
	char name[50]={' '};
	char waste;
	
	for(int i=0;i<1;i++){
		fin>>age;
		fin>>marks;
		fin.ignore();
		fin.getline(name,49);
		
	
		cout<<age<<" "<<marks<<" "<<name<<" "<<endl;
	}
	
		ifstream fin;
	fin.open("Readme.txt");
	if (fin.is_open()){
			int age=0;
	float marks=0.0;
	const int size=50;
	char name[size]={' '};
	char waste;
	
	for(int i=0;i<1;i++){
		fin>>age;
	//	fin>>waste;
		fin>>marks;
	//	fin>>waste;
		fin.ignore();
		fin.getline(name,49);
		
	
		cout<<name<<" "<<age<<" "<<marks<<" "<<endl;
	}
	} 
	else {
		cout<<"file is not present"<<endl;
	}
	*/
   /*  ofstream fout;
     ofstream fout2;
     ofstream fout3;
     ifstream fin;
     fin.open("Readme.txt");
     if(fin.is_open()){
     	int age=0;
     	float marks=0.0;
     	char name[50]={' '};
     	
     	fout.open("age.txt");
     	fout2.open("marks.txt");
     	fout3.open("name.txt");
     	
     	for(int i=0;i<1;i++){
     		fin>>age;
     		fin>>marks;
     		fin.ignore();
     		fin.getline(name,49);
     		 
     	    fout<<age<<endl;
			fout2<<marks<<endl;
			fout3<<name<<endl;
			 	 
		 }
	 }
	 else{
	 	cout<<"This is not available"<<endl;
	 }
     fout.close();
     fout2.close();
     fout3.close();
     
    ifstream fileline;
    fileline.open("fileline.txt");
    
    if(fileline.is_open()){
    	int count=0;
    	string line;
    	while(getline(fileline,line)){
    		count++;
		}
    	fileline.close();
    	cout<<count<<endl;
	}
	else {
		cout<<"file not founf"<<endl;
	}
	 
	   ifstream fileline;
    fileline.open("filenumbersofwords.txt");
    
    if(fileline.is_open()){
    	int wordCount=0;
    	string line;
    	while(getline(fileline,line)){
    		 wordCount++;
    }
    
		fileline.close();
    	cout<<wordCount<<endl;
    }
	else {
		cout<<"file not founf"<<endl;
	}
	
	ifstream copy;
	copy.open("copyingthefile.txt");
	ofstream copied;
	copied.open("copied.txt");
	
	if(copy.is_open()&&copied.is_open()){
		string line;
		
		while(getline(copy,line)){
		copied<<line<<endl;	
		}
		
	copy.close();
	copied.close();
	cout<<"File copied successfully"<<endl;
	}
	
	else{
			cout<<"Not found"<<endl;
	}
		return 0;
}
     
  */ 
  
  /* #include<iostream>
#include<string>
#include<fstream>


using namespace std;


bool isprime(int n)
{
	bool isPrime = true;
	if (n == 0 || n == 1)
		isPrime = false;
	else
	{
		for (int i = 2; i <= n / 2; ++i)
		{
			if (n%i == 0)
			{
				isPrime = false;
				break;
			}
		}
	}
	return isPrime;
}


int main()
{
	const int N = 5;
	int arr[N];
	cout << "Please, enter 5 values: ";
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	ofstream of;
	of.open("Integer.txt");
	if (!of.is_open())
		cout << "File isn`t opened!";
	else
	{
		for (int i = 0; i < N; i++)
		{
			of << arr[i] << " ";
		}
	}
	of.close();
	int arrFromFile[N];
	ifstream ifs("Integer.txt");
	if (!ifs.is_open())
		cout << "File isn`t opened!";
	else
	{
		string line;
		string str = "";
		getline(ifs, line, '\n');
		int k= 0;
		for (int i = 0; i < line.size(); i++)
		{
			if (line[i] == ' ')
			{
				arrFromFile[k++] = stoi(str);
				str = "";
			}
			else
				str += line[i];
		}
	}
	ifs.close();
	int result[N];
	for (int i = 0; i < N; i++)
	{
		if (isprime(arrFromFile[i]))
			result[i] = 1;
		else
			result[i] = 0;
	}
	cout << "\nResult array: ";
	for (int i = 0; i < N; i++)
	{
		cout << result[i] << " ";
	}
	ofstream ofr;
	ofr.open("Result.txt");
	if (!ofr.is_open())
		cout << "File isn`t opened!";
	else
	{
		for (int i = 0; i < N; i++)
		{
			ofr << result[i] << " ";
		}
	}
	ofr.close();
} 
     
   */  
   
      ifstream fin;
      ofstream fout;
      fin.open("Readme.txt");
      fout.open("TestPractice.txt");

      char name[30]={' '};
      double percentage;
      double marks;
      
      
    
      for(int i=0;i<1;i++){
      	fin.getline(name,29,',');
        fin>>percentage;
      	fin.ignore();
      	fin>>marks;
      
      	cout<<name<<" "<<percentage<<" "<<marks<<endl;
      	
	  }
      	 
     
      	 	
      
	  
	  
	 
	  fin.close();
	  fout.close();
	
     
   return 0;   
     
}
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
