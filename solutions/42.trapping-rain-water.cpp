/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */
// @status: unfamiliar
// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        int max_l=0,max_r=0,ans=0;
        vector<int> h(height.size(),0);
        int left=0,right=height.size()-1;
        vector<int> prefix(height.size(),-1);
        vector<int> postfix(height.size(),-1);
        for(int i=0;i<=right;i++){
            max_l=max(max_l,height[i]);
            prefix[i]=max_l;
            max_r=max(max_r,height[right-i]);
            postfix[right-i]=max_r;
        }
        for(int i=0;i<=right;i++){
            int tmp=min(prefix[i],postfix[i])-height[i];
            if(tmp>0)
                ans+=tmp;
        }
        return ans;
    }
};
// @lc code=end

