#include<bits/stdc++.h>
using namespace std;
bool subsetsum(int *arr, int n, bool dp[1000][1000], int sum){
       
        
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
// 	for(int i=0;i<n+1;i++){
// 	    for(int j=0;j<sum+1;j++){
// 	        cout<<dp[i][j]<<" ";
// 	    }cout<<endl;
// 	}
	return dp[n][sum];
    
}
        
    
    
int minDifference(int arr[], int n){ 
	    if(n==1)return arr[0];
	     int range=0;
	     for(int i=0;i<n;i++)range+=arr[i];
	    
	     bool dp[1000][1000];
	      
	     subsetsum(arr, n, dp, range);
	    
	     int minn=INT_MAX;
	     //cout<<range<<endl;
	     for(int i=0;i<=range/2;i++){
	         //cout<<i<<" ";
	        if(dp[n][i]==true){
	           // cout<<i<<" ";
	              minn=min(minn, range-2*i);
	        }
	     }
	     //cout<<endl;
	     return minn;
} 
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	cout<<minDifference(arr,n);
}