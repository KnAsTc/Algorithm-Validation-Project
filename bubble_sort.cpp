#include<iostream>
#include<vector>
using namespace std;

void bbsort(int *arr,int n){
	int temp;
	for(int i = n-1; i > 0; i--){		
		for(int j = 0; j <= i-1; j++){			
			if(arr[j]>arr[j+1]){				
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;			
			}		
		}
	}	
	for(int i=0;i<5;i++)cout<<arr[i]<<" ";	
}
int main(){	 
	int n=5;
	int arr[n];	
	for(int i=0;i<5;i++)cin>>arr[i];	
	bbsort(arr,n);	
}
