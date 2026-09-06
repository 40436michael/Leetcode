/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,ans=0,j=height.size()-1;
        while(i<j){
            ans=max(ans,min(height[i],height[j])*(j-i));
            if(height[i]>=height[j])
                j--;
            else
                i++;
        }
        return ans;
    }
};
// @lc code=end

