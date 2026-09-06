/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */
// @status: unfamiliar
// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int sum,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int k=0;k<n-2;k++){
            if(nums[k]>0)
                break;
            if(k>0&&nums[k]==nums[k-1])
                continue;
            int i=k+1,j=n-1;
            while(i<j){
                sum=nums[i]+nums[j]+nums[k];
                if(sum>0)
                    j--;
                else if(sum<0)
                    i++;
                else{
                    ans.push_back({nums[i],nums[k],nums[j]});
                    i++;
                    j--;
                    while(i<j&&nums[i]==nums[i-1]){
                        i++;
                    }
                    while(i<j&&nums[j]==nums[j+1]){
                        j--;
                    }                    
                }
                    
            }
        }
        return ans;
    }
};
// @lc code=end

