#include<iostream>
using namespace std;


void product(int* first,int* second){
	int *temp=first;//first 保留開頭位置 
	int *temp2=second;//second 保留開頭位置 
	int ans[3][3];//矩陣相乘完暫存 
	cout<<"first matrix"<<endl;
	int col[3];
	for(int i=0;i<3;i++){	//第一個矩陣輸入 
		for(int j=0;j<3;j++){
			cin>>*first;
			first++;
		}
	}
	cout<<"second matrix"<<endl;	
	for(int i=0;i<3;i++){	//第二個矩陣輸入 
		for(int j=0;j<3;j++){
			cin>>*second;
			second++;
		}
	}
	for(int i=0;i<3;i++){	//矩陣相乘 
		for(int j=0;j<3;j++){//第一個矩陣 0 1 2的位置 乘 第二個矩陣 0 3 6的位置 以此類推 
			ans[i][j]=(*temp +i*3) * (*temp2+j) + (*temp+i*3+1) * (*temp2+j+3) +(*temp+i*3+2) * (*temp2+j+6);
		}
	}
	for(int i=0;i<3;i++){  //將第一個矩陣換成結果 
		for(int j=0;j<3;j++){
			*temp=ans[i][j];
			temp++;
		}
	}
}
int main(){	
	int first[3][3]={0};
	int *ptr;
	ptr = &first[0][0];//第一個矩陣開頭
	int second[3][3]={0};
	int *ptr2;
	ptr2 = &second[0][0];//第二個矩陣開頭
	
	product(ptr,ptr2); //矩陣開頭丟入function
	cout<<"the answer:"<<endl;
	for(int i=0;i<3;i++){ //輸出結果 
		for(int j=0;j<3;j++){
			cout<<first[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
