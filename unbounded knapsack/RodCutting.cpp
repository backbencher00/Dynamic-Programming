#include<bits/stdc++.h>
using namespace std;
int rodcutting(int l, int *price, int n){
     
       int dp[n+1][l+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<l+1;j++){
                if(j==0 || i==0){
                    if(i==0){
                        dp[i][j]=INT_MIN;
                    }else{
                        dp[i][j]=0;
                    }
                }
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<l+1;j++){
                if(price[i-1]<=j){
                    dp[i][j]=max(1+dp[i][j-price[i-1]], dp[i-1][j]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][l]<0?0:dp[n][l];
}
int main(){
    int l;
    cin>>l;
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++)cin>>price[i];
    cout<<rodcutting(l,price,n);
}