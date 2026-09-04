/*
 * @lc app=leetcode id=3876 lang=cpp
 *
 * [3876] Construct Uniform Parity Array II
 */

// @lc code=start
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min_number=nums1[0];
        int odd_num=0;
        int even_num=0;
        for(auto i:nums1){
            min_number=min(min_number,i);
            if(i%2==1)
                odd_num++;
            else
                even_num++;
        }
        if(min_number%2==0&&odd_num>=1)
            return false;
        else
            return true;

    }
};
// @lc code=end

