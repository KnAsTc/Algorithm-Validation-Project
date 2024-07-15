#include<iostream>
#include<cstdlib>
using namespace std;

int func(int n,int*ptr1,int*ptr2){
	int sum;	//sum
	for(int i=0;i<n;i++){
		
		cin>>*(ptr1+i);//input arr1

	}
	for(int i=0;i<n;i++){
		
		cin>>*(ptr2+i);//input arr2

	}
	for(int i=0;i<n;i++){
		
		sum+=*(ptr1+i) * *(ptr2+i);//inner product

	}
	
	return sum;
}
int main(){
	int n;
	cin>>n; // array length
	int *ptr1,*ptr2;	
	ptr1= (int*)malloc(n * sizeof(int));//create a new array with using pointer
	ptr2= (int*)malloc(n * sizeof(int));//create a new array with using pointer
	cout<<func(n,ptr1,ptr2)<<endl;	//output
}
