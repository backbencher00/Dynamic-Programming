# DP
1. 0-1 knapsack (6)
```cpp
int 0-1knapsack(int *wt, int *val, int W, int n){
	//recursive approach
        //if(n==0 || W==0)return 0;
        // if(W<=wt[n-1]){
        //     return max(val[n-1] + 0-1knapsack(W-wt[n-1], wt, val, n-1), 0-1knapsack(W, wt, val, n-1) );
        // }else return 0-1knapsack(W, wt, val, n-1);
        
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
                    dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][W];
}
```
3. unbounded knapsack(5)
```cpp
int unboundedknapsack(int *wt, int *val, int W, int n){
	//recursive approach
        //if(n==0 || W==0)return 0;
        // if(W<=wt[n-1]){
        //     return max(val[n-1] + unboundedknapsack(W-wt[n-1], wt, val, n), unboundedknapsack(W, wt, val, n-1) );
        // }else return unboundedknapsack(W, wt, val, n-1);
        
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
```
5. fibonacci (7)
6. LCS (15)
7. LIS (10)
8. kadane's algo (6)
9. MCM (7)
