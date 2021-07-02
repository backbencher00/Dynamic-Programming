#include<bits/stdc++.h>
using namespace std;
int knapsack(int *wt, int *val, int W, int n){
	    //recursive approach
        //if(n==0 || W==0)return 0;
        // if(W<=wt[n-1]){
        //     return max(val[n-1] + knapsack(W-wt[n-1], wt, val, n), knapsack(W, wt, val, n-1) );
        // }else return knapsack(W, wt, val, n-1);
        
        //dp approach
        int dp[n+1][W+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<W+1;j++){
                if(j==0 || i==0)dp[i][j]=0;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<W+1;j++){
                if(wt[i-1]<=j){
                    dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]], dp[i-1][j]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][W];
}
int main(){
	int n;
	cin>>n;
	int val[n];
	int wt[n];
	for(int i=0;i<n;i++)cin>>val[i];
	for(int i=0;i<n;i++)cin>>wt[i];
	int W;
	cin>>W;
	cout<<knapsack(wt, val, W, n)<<endl;
	return 0;
}