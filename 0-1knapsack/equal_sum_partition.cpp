#include<bits/stdc++.h>
using namespace std;
bool subsetsum(int *arr, int n, int sum){
	int dp[n+1][sum+1];
	for(int i=0;i<n+1;i++){
		for(int j=0;j<sum+1;j++){
			if(i==0)dp[i][j]=false;
			if(j==0)dp[i][j]=true;
		}
	}

	for(int i=1;i<n+1;i++){
		for(int j=1;j<sum+1;j++)
			if(arr[i-1]<=j) dp[i][j]=(dp[i-1][j-arr[i-1]] || dp[i-1][j]);
			else dp[i][j]=dp[i-1][j];
	}
	return dp[n][sum];
}
int quealsumpartition(int *arr, int n){
	int sum=0;
	for(int i=0;i<n;i++)sum+=arr[i];
	if(sum%2!=0)return 0;i
    else{
    	return sumsetsum(arr, n, sum/3);
    }
}
int main(){
	int int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	if(equalsum(arr,n))cout<<"YES"<<endl;
    else cout<<"NO";
}