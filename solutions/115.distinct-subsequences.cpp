/*
 * @lc app=leetcode id=115 lang=cpp
 *
 * [115] Distinct Subsequences
 */
// @status: unfamiliar
// @lc code=start
class Solution {
public:
    int numDistinct(string s, string t) {
        int s_len=s.length();
        int t_len=t.length();
        if(t_len>s_len)
            return 0;
        vector<vector<unsigned long long>> dp(t_len+1,vector<unsigned long long>(s_len+1,0));
        for(int i=0;i<=s_len;i++){
            dp[0][i]=1;
        }
        for(int i=1;i<=t_len;i++){
            for(int j=1;j<=s_len;j++){
                if(s[j-1]==t[i-1]){
                    dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
                }
                else
                    dp[i][j]=dp[i][j-1];
            }
        }
        return dp[t_len][s_len];
    }
};
// @lc code=end

