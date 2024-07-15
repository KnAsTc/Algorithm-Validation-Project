#407220325
#410411473
#410410152
#410411200
#410411382
#410411085
#include<iostream>
#include<cstdlib>


using namespace std;

int pascal(int row,int col,int max_col){
	if (col >max_col){
	cout<<"fail"<<endl;
	return -1;
	}
	if(row!=0 and col!=0){
		if(col==max_col)return 1;
		else return pascal(row-1,col-1,max_col-1)+pascal(row-1,col,max_col-1);
	}
	else if(row!=0 and col==0){	
		return pascal(row-1,col,max_col-1);
	}
	else if(row==0){
		return 1;
	}
}
int main(){
	int loop;
	cin>>loop;
	int *row;
	int *col;
	row= (int*)malloc(loop*sizeof(int));
	col= (int*)malloc(loop*sizeof(int));
	if( row == NULL or col == NULL) {
    // 無法取得記憶體空間
    fprintf(stderr, "Error: unable to allocate required memory\n");
    return 1;
  	}
	for(int i=0;i<loop;i++){		
		cin>>row[i]>>col[i];	
	}
	for(int i=0;i<loop;i++){	
		cout<<pascal(row[i],col[i],row[i])<<endl;	
	}
}
