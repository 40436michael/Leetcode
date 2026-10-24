/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(depth>0)
                    ans+=s[i];
                depth++;
            }
            else{
                depth--;
                if(depth>0)
                    ans+=s[i];
            }
        }
        return ans;
    }
};
// @lc code=end

