/*
 * @lc app=leetcode id=3360 lang=cpp
 *
 * [3360] Stone Removal Game
 */

// @lc code=start
class Solution {
public:
    bool canAliceWin(int n) {
        int i;
        for(i=10;i>0;i--){
            if(n-i>=0){
                n -= i;
            }
            else if(n-i<0){
                break;
            }
        }
        return i%2==1;
    }
};
// @lc code=end

