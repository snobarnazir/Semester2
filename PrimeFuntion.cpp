#include <iostream>
#include <fstream>
using namespace std;
           void prime(int a,int b){
           	int i,k;
           	for( i=a;i<=b;i++){
           		for(k=2;k<=i;k++){
           			if(i%k==0){
           				break;
					   }
				   }
				   if(i==k){
				   	cout<<"Prime number "<<i<<endl;
				   }
				   else{
				   	cout<<"Not a prime number"<<i<<endl;
				   }
			   }
           	
		   }
		   
		   
		   
		   
int main(){
	int a,b;
	cout<<"Enter a: "<<endl;
	cin>>a;
	cout<<"Enter b: "<<endl;
	cin>>b;
	prime(a,b);
}
