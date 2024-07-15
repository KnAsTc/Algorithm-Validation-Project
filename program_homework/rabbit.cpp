#407220325
#410411473
#410410152
#410411200
#410411382
#410411085
#include<iostream>

using namespace std;


int rabbit(int m,int initial){	
	int last=initial;
	int temp=initial;
	int now=initial;
	for(int i=0;i<m-2;i++){
		temp=now;
		now=last+now;
		last=temp;
	}
	return now;	
}


int main(){
	int m;
	cin>>m;
	cout<<rabbit(m,1)<<endl;
}
