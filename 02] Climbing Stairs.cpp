
// Recursion :
class Solution {
public:
    int climbStairs(int n) {
        if(n<=1) return 1;
        
        return climbStairs(n-1) + climbStairs(n-2); 
    }
};


// Memoization

class Solution {
public:
    int memo(int n,vector<int> &dp) {
        if(n<=1)return 1;

        if(dp[n] != -1) return dp[n];

        return dp[n] = memo(n-1,dp) + memo(n-2,dp);
    } 
    int climbStairs(int n) {
        
        vector<int>dp(n+1,-1);
        return memo(n,dp);
        
        
    }
};


// Tabulation

class Solution {
public:
    int climbStairs(int n) {
        int prev2=1;
        int prev1=1;
        for(int i = 2 ; i <=n ; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1; 
    }
};
