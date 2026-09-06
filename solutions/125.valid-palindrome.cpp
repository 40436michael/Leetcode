/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            if(!isalpha(s[i])&&!isdigit(s[i]))
                i++;
            else if(!isalpha(s[j])&&!isdigit(s[j]))
                j--;
            else if(tolower(s[i])!=tolower(s[j]))
                return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
// @lc code=end

