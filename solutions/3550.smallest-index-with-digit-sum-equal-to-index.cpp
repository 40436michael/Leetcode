/*
 * @lc app=leetcode id=3550 lang=cpp
 *
 * [3550] Smallest Index With Digit Sum Equal to Index
 */

// @lc code=start
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]>0){
                sum+=nums[i]%10;
                nums[i]/=10;
            }
            if(i==sum)
                return i;
        }
        return -1;
    }
};
// @lc code=end

