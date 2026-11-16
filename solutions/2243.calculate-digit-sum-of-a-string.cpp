/*
 * @lc app=leetcode id=2243 lang=cpp
 *
 * [2243] Calculate Digit Sum of a String
 */

// @lc code=start
class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length()>k){
            string next="";
            for(int i=0;i<s.length();i+=k){
                int sum=0;
                for(int j=0;j<k&&i+j<s.length();j++){
                    sum+=s[i+j]-'0';    
                }
                next+=to_string(sum);
            }
            s=next;
        }
        return s;
    }
};
// @lc code=end

