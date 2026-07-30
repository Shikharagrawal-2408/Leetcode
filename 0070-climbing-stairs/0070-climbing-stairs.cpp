class Solution {
public:
    int solve(int n,vector<int>&dp)
    {
        if(n<3)
        return n;

        if(dp[n]!=0)
        return dp[n];

        return dp[n]=solve(n-1,dp)+solve(n-2,dp);

    }
    int climbStairs(int n) {

        if(n<=3)
        return n;

        vector<int>dp(n+1,0);
        dp[2]=2;
        dp[1]=1;
        
        return solve(n,dp);
        
    }
};