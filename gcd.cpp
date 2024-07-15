#include<iostream>
#include<vector>

using namespace std;

int gcd(int i,int j){	
	int s=0;
	while(1){
		s=i%j;
		if(s==0)return j;
		i=j;
		j=s;
	}	
}

int main(){
	int i,j;
	cin>>i>>j;
	cout<<gcd(i,j);
}
#9242
#36968
