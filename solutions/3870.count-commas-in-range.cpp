/*
 * @lc app=leetcode id=3870 lang=cpp
 *
 * [3870] Count Commas in Range
 */

// @lc code=start
class Solution {
public:
    int countCommas(int n) {
        if(n<1000)
            return 0;
        else
            return n-1000+1;
    }
};
// @lc code=end

