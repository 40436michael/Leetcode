/*
 * @lc app=leetcode id=3364 lang=cpp
 *
 * [3364] Minimum Positive Sum Subarray 
 */

// @lc code=start
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum<=0){
                    continue;
                }
                if(j-i+1>r){
                    break;
                }
                if(j-i+1>=l){
                    ans=min(ans,sum);
                }
            }
        }
        if(ans==INT_MAX){
            ans=-1;
        }
        return ans;
    }
};
// @lc code=end

