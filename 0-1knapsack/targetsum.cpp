//the problem statement of this question is we have to find the number
//of ways we can assign the +, -,  such that its value can become equal to target
#include<bits/stdc++.h>
using namespace std;
int subsetsum(int *arr, int n, int sum){
	int dp[n+1][sum+1];
	for(int i=0;i<n+1;i++){
		for(int j=0;j<sum+1;j++){
			if(i==0)dp[i][j]=0;
			if(j==0)dp[i][j]=1;
		}
	}

	for(int i=1;i<n+1;i++){
		for(int j=1;j<sum+1;j++)
			if(arr[i-1]<=j) dp[i][j]=dp[i-1][j-arr[i-1]] + dp[i-1][j];
			else dp[i][j]=dp[i-1][j];
			
	
	}
	return dp[n][sum];


}
int countdiff(int *arr, int n, int target){
	int sum=0;
	for(int i=0;i<n;i++)sum+=arr[i];
	return subsetsum(arr, n, (diff+sum)/2 );
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int target;
    cin>>target;
    cout<<countdiffarr, n, target);

}