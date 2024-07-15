#include<iostream>
#include<vector>
#include<string>
using namespace std;

string lcs(string A,string B);
string compare(int *end_A,string A,int num_max_length,int max_length);

string sol(string text,string prefixString,string suffixString){
	
cout<<"dp"<<endl;

cout<<lcs(text,prefixString)<<endl;
cout<<lcs(text,suffixString)<<endl;


return lcs(text,prefixString)+lcs(text,suffixString);	

}
string lcs(string A,string B){

	int x = A.length();
	int y = B.length();
	A = " " + A;//�S���B�z�@�U�A�K��s�{ 
	B = " " + B;
	
	if(x<y){
		return lcs(B,A);	
	}
		
	vector<vector<int> >dp(x+1,vector<int>(y+1));
	int i,j;
	for(i=0;i<=x;i++)
	{
		for(j=0;j<=y;j++)
			dp[i][j] = 0;
	}

	int max_length = 0;
	for(i=1;i<=x;i++)
		for(j=1;j<=y;j++)
			if(A[i]==B[j])
			{
				dp[i][j] = dp[i-1][j-1] + 1;
				if(dp[i][j]>max_length)
					max_length = dp[i][j];
			}
			else
				dp[i][j] = 0;
	
	int const arr_length = (x>y?x:y) + 1;
	int end_A[arr_length];	
	int num_max_length = 0;	
	
	for(i=1;i<=x;i++)
		for(j=1;j<=y;j++)
			if(dp[i][j] == max_length)
				end_A[num_max_length++] = i;
				
	return compare(end_A, A, num_max_length , max_length);
}



string compare(int *end_A,string A,int num_max_length,int max_length){
	int max=0;
	int max_k=0;
	string ab;
	int end;
	int start ;
	for(int k=0;k<num_max_length;k++){
		int temp=0;
		end=end_A[k];
		start = end - max_length + 1;
		for(int l=start;l<=end;l++){
			temp+=A[l];
		}
		if(max<temp){
			max=temp;
			max_k=k;
		}
		
	}
	end=end_A[max_k];
	start = end - max_length + 1;
	for(int l=start;l<=end;l++){
		ab+=A[l];
		}
		
	return ab;			
}

int  main(){

	string text = "nothing";
 	string prefixString = "bruno";
 	string suffixString = "ingenious";
	cout<<"start";
	string ans;
	ans=sol(text,prefixString,suffixString);
	cout<<ans; 
}
