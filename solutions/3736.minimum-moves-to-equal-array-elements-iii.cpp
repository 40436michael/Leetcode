/*
 * @lc app=leetcode id=3736 lang=cpp
 *
 * [3736] Minimum Moves to Equal Array Elements III
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max_num=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(max_num>=nums[i]){
                ans+=max_num-nums[i];
            }
            else{
                ans+=(nums[i]-max_num)*i;
                max_num=nums[i];
            }
        }
        return ans;
    }
};
// @lc code=end

