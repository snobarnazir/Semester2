#include <iostream>
using namespace std;

         /*1. double NumberToFind(){
                  double num;
                  cout<<"Enter number to find in array :"<<endl;
               	  cin>>num;
	        return num;
	   }

       bool simplearry(int arr[],int size,double num){
       	
       	          for(int i=0;i<size;i++){
       		    	if(arr[i]==num){
       		      return true;
		}
	}
		return 0;
	}
	*/
	int maxarry(int arr[],int size,int& loc){
		int max=arr[0];
		for(int i=0;i<size;i++){
			if(max<arr[i]){
				max=arr[i];
				loc=i;
			}
		}
		return max;
	}
	
	
	
	
	
	
	int main(){
			int arr[5];
	cout<<"Enter 5 NUMBERS For array: "<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	int max=0;
	int loc=0;
	max=maxarry(arr,5,loc);
	cout<<"The maxium number is: "<<max<<" Ant its Location is :"<<loc<<endl;
		
		
		
	
/*1.	int arr[5];
	cout<<"Enter 5 NUMBERS For array: "<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
    double num;                   
    num= NumberToFind();
	if (simplearry(arr,5,num)){
		cout<<"Number is found "<<endl;
	}
	else {
		cout<<"Number is not found "<<endl;
	}
	
	*/
	return 0;
}