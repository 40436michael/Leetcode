/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto i:s){
            char prefix=stk.top();
            if(stk.empty()){
                stk.push(i);
            }            
            else if(prefix=='('&&i==')')
                stk.pop();
            else if(prefix=='['&&i==']')
                stk.pop();
            else if(prefix=='{'&&i=='}')
                stk.pop();
            else 
                stk.push(i);
        }
        if(stk.empty())
            return true;
        else
            return false;
    }
};
// @lc code=end

