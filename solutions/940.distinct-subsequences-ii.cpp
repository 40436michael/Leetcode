/*
 * @lc app=leetcode id=940 lang=cpp
 *
 * [940] Distinct Subsequences II
 */
// @status: unfamiliar
// @lc code=start
class Solution {
public:
    int distinctSubseqII(string S) {
        int endsWith[26]={},mod=1e9+7;
        vector<long long> end_with(26, 0);
        long long ans=0;
        for(auto i:S){
            int index=i-'a';
            long long new_end=(ans+1)%mod;
            ans=(ans-end_with[index]+new_end+mod)%mod;
            end_with[index]=new_end;
        }  
        return ans;
    }
};
// @lc code=end

