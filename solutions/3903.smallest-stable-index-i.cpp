/*
 * @lc app=leetcode id=3903 lang=cpp
 *
 * [3903] Smallest Stable Index I
 */

// @lc code=start
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max_num=nums.front();
        int min_num=nums.back();
        vector<int> min_v=nums;
        int nums_size=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            min_num=min(min_num,nums[nums_size-i]);
            min_v[nums_size-i]=min_num;
        }
        
        for(int i=0;i<nums.size();i++){
            max_num=max(nums[i],max_num);
            if(max_num-min_v[i]<=k)
                return i;
        }
        return -1;

    }
};
// @lc code=end

