/*
 * @lc app=leetcode id=3411 lang=cpp
 *
 * [3411] Maximum Subarray With Equal Products
 */

// @lc code=start
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            unsigned long long prod=1;
            int gcd_n=0;
            int lcm_n=1;
            for(int j=i;j<n;j++){
                prod*=nums[j];
                gcd_n=gcd(nums[j],gcd_n);
                lcm_n=lcm(nums[j],lcm_n);
                if(prod==gcd_n*lcm_n){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};
// @lc code=end