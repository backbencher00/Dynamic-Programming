#include<bits/stdc++.h>
using namespace std;
long long int maxchange( int S[], int n, int sum ){
       
       long long  dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)dp[i][j]=0;
                if(j==0)dp[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(S[i-1]<=j)dp[i][j]=(dp[i][j-S[i-1]] + dp[i-1][j]);
                else dp[i][j]=dp[i-1][j];
                
            }
        }
        return dp[n][sum];
        
    }
int main(){
    int sum;
    cin>>sum;
    int n;
    cin>>n;
    int coin[n];
    for(int i=0;i<n;i++)cin>>coin[i];
    cout<<maxchange(coin,n,sum);
}