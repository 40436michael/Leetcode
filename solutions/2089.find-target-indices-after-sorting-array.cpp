/*
 * @lc app=leetcode id=2089 lang=cpp
 *
 * [2089] Find Target Indices After Sorting Array
 */

// @lc code=start
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int decrease=0;
        int equal=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                decrease++;
            }
            else if(nums[i]==target){
                equal++;
            }
        }
        for(int i=0;i<equal;i++){
            ans.push_back(decrease+i);
        }
        return ans;
    }
};
// @lc code=end

