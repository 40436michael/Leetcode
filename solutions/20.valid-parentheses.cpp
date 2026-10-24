/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i:s){
            char ch=st.top();
            if(st.empty()){
                st.push(i);
            }            
            else if(ch=='('&&i==')')
                st.pop();
            else if(ch=='['&&i==']')
                st.pop();
            else if(ch=='{'&&i=='}')
                st.pop();
            else 
                st.push(i);
        }
        return st.empty();
    }
};
// @lc code=end

