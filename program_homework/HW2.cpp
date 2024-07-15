#include<iostream>
#include<cstdlib>

using namespace std;

int ct(int ascii,int n,char *ptr1){//count 1 word 
	int count=0;
	for(int i=0;i<=n;i++){
		
		if( int(*(ptr1+i))==ascii)count+=1;// if it exists then count+1	
	}
	return count;	
}
void input(int n,char *ptr1){//input
	
	for(int i=0;i<=n;i++){	
		cin.get(*(ptr1+i)) ;//using cin.get can also read space or enter
	}
}
void analysis(int n,char *ptr1){//analysis a-z  
	int temp,flag;	
	
	int record_times=0;
	char *record;
	record= (char*)malloc(n * sizeof(char));//create a new array with using pointer	
	
	*(record) = *(ptr1);
	record_times+=1;
	for(int i=0;i<=n;i++){// analysis code using ascii code	
		flag=0;	
		for(int j=0;j<record_times;j++)
			if( *(ptr1+i) == *(record+j) )flag=1;// if it's already analysis characters then flag=1
			
		if(flag==1)continue;//it means already analysis this characters
		else{
			temp=ct(int(*(ptr1+i)), n, ptr1);// deliver 3 things 'ascii code' , 'length' ,'pointer'
			if(*(ptr1+i)!=' ')cout << "# of " << *(ptr1+i) <<"="<< temp << endl;// output without space			
			*(record+record_times) = *(ptr1+i);//record already analysis characters
			record_times+=1;//need to check more times next
		}
	}	
	}

int main(){	
	int n;	
	cin>>n;// array length	
	char *ptr1;
	ptr1= (char*)malloc(n * sizeof(char));//create a new array with using pointer	
	input(n,ptr1);//input 	
	analysis(n,ptr1);//include output (different func can prove it deliver pointer)
}
