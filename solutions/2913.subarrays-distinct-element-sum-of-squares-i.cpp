/*
 * @lc app=leetcode id=2913 lang=cpp
 *
 * [2913] Subarrays Distinct Element Sum of Squares I
 */

// @lc code=start
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            unordered_set<int> seen;
            for(int j=i;j<n;j++){
                seen.insert(nums[j]);
                int size=seen.size();
                ans+=size*size;
            }
        }
        return ans;
    }
};
// @lc code=end

