/*
 * @lc app=leetcode id=3871 lang=cpp
 *
 * [3871] Count Commas in Range II
 */
// @status: unfamiliar
// @lc code=start
class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0, i;
        for (i=1000;i<=n;i*=1000)
            ans+=n-i+1;
        return ans;
    }
};
// @lc code=end

