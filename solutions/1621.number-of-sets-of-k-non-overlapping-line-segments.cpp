/*
 * @lc app=leetcode id=1621 lang=cpp
 *
 * [1621] Number of Sets of K Non-Overlapping Line Segments
 */
// @status: unfamiliar
// @lc code=start
class Solution {
public:
    int numberOfSets(int n, int k) {
        long long mod=1e9+7;
        vector<vector<long long>> dp(n+1,vector<long long>(k+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int j=1;j<=k;j++){
            long long sum=0;
            for(int i=1;i<=n;i++){
                dp[i][j]=(sum+dp[i-1][j])%mod;
                sum=(sum+dp[i][j-1])%mod;
            }
        }
        return dp[n][k]%mod;
    }
};
// @lc code=end

