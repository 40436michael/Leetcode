/*
 * @lc app=leetcode id=3105 lang=cpp
 *
 * [3105] Longest Strictly Increasing or Strictly Decreasing Subarray
 */

// @lc code=start
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=1;
        int increase_len=1;
        int decrease_len=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                increase_len++;
                decrease_len=1;
            }
            else if(nums[i]<nums[i-1]){
                increase_len=1;
                decrease_len++;
            }
            else{
                increase_len=1;
                decrease_len=1;
            }
            ans=max({decrease_len,increase_len,ans});
        }        
        return ans;
    }
};
// @lc code=end

