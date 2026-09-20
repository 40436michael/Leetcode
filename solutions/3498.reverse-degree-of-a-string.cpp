/*
 * @lc app=leetcode id=3498 lang=cpp
 *
 * [3498] Reverse Degree of a String
 */

// @lc code=start
class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            ans+=(26-(s[i]-'a'))*(i+1);
        }
        return ans;
    }    
};
// @lc code=end

