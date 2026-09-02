/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int mul=1;
        int iszero=0;
        for(auto i:nums){
            if(i){
                mul*=i;
            }
            else
                iszero++;
        }
        for(int i=0;i<nums.size();i++){
            if(iszero==1){
                if(nums[i]!=0)
                    ans.push_back(0);
                else 
                    ans.push_back(mul);
            }
            else if(iszero>1)
                ans.push_back(0);
            else{
                ans.push_back(mul/nums[i]);
            }
            

        }
        return ans;
    }
};
// @lc code=end

