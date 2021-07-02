# DP
1. 0-1 knapsack (6)
```cpp
     if(n==0 || W==0)return 0;
     if(W<=wt[n-1])
     return max(val[n-1] + 0-1knapsack(W-wt[n-1], wt, val, n-1), 0-1knapsack(W, wt, val, n-1) );
     else return 0-1knapsack(W, wt, val, n-1);
 
```
2. unbounded knapsack(5)
```cpp
     if(n==0 || W==0)return 0;
     if(W<=wt[n-1])
     return max(val[n-1] + 0-1knapsack(W-wt[n-1], wt, val, n), 0-1knapsack(W, wt, val, n-1) );
     else return 0-1knapsack(W, wt, val, n-1);
```
3. fibonacci (7)
4. LCS (15)
5. LIS (10)
6. kadane's algo (6)
7. MCM (7)
