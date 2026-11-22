/*
 * @lc app=leetcode id=2124 lang=cpp
 *
 * [2124] Check if All A's Appears Before All B's
 */

// @lc code=start
class Solution {
public:
    bool checkString(string s) {
        int count_a=0;
        int count_b=0;
        for(auto i:s){
            if(i=='a'){
                if(count_b>0)
                    return false;
                count_a++;
            }
            if(i=='b'){
                count_b++;
            }
        }
        return true;
    }
};
// @lc code=end

