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
```cpp
    if(n==0 || m==0)return 0;
    if(s1[n-1]==s2[m-1])return LCS(s1, s2, n-1, m-1)+1; 
    else return max(LCS(s1,s2, n, m-1), LCS(s1, s2, n-1, m));
 ```
7. LIS (10)
8. kadane's algo (6)
9. MCM (7)
