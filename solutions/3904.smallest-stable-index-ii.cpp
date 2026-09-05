/*
 * @lc app=leetcode id=3904 lang=cpp
 *
 * [3904] Smallest Stable Index II
 */

// @lc code=start
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max_num=nums.front();
        vector<int> min_v=nums;
        int n=nums.size()-1;
        min_v[n]=nums.back();
        for(int i=n-1;i>=0;i--){
            min_v[i]=min(min_v[i+1],min_v[i]);
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

