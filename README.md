# DP
1. 0-1 knapsack (6)
```cpp
        if(n==0 || W==0)return 0;
        if(W<=wt[n-1]){
            return max(val[n-1] + knapsack(W-wt[n-1], wt, val, n-1), knapsack(W, wt, val, n-1) );
        }else return knapsack(W, wt, val, n-1);
```
3. unbounded knapsack(5)
```cpp
        if(n==0 || W==0)return 0;
        if(W<=wt[n-1]){
            return max(val[n-1] + knapsack(W-wt[n-1], wt, val, n), knapsack(W, wt, val, n-1) );
        }else return knapsack(W, wt, val, n-1);
```
5. fibonacci (7)
6. LCS (15)
7. LIS (10)
8. kadane's algo (6)
9. MCM (7)
