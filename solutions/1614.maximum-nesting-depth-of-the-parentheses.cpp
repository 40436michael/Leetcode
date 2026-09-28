/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
class Solution {
public:
    int maxDepth(string s) {
        int ans=0,count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
                ans=max(ans,count);
            }
            else if(s[i]==')'){
                count--;
            }
        }
        return ans;
    }
};
// @lc code=end

