#include<iostream>
#include<cstdlib>
using namespace std;

int func(int* a,int *b,int n){
	int inner;//內積結果
	cout<<"a matrix" <<endl;
	for(int i=0;i<n;i++){//輸入a矩陣 
		
		cin>>*(a+i);
	}
	cout<<"b matrix" <<endl;
	for(int i=0;i<n;i++){//輸入b矩陣 
		
		cin>>*(b+i);
	}
	
	for(int i=0;i<n;i++){
			
		inner+=	(*a) * (*b) ;
		a++;
		b++;
	}
	cout<<"inner product=";
	return inner;
}

int main(){
	int n;
	cin>>n; //矩陣大小 
	int* a=(int*)malloc(n*sizeof(n));//創建a矩陣 
	int* b=(int*)malloc(n*sizeof(n));//創建b矩陣 
	cout<<func(a,b,n);//將矩陣丟入func 
}
