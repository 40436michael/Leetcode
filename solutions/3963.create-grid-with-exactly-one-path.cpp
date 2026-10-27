/*
 * @lc app=leetcode id=3963 lang=cpp
 *
 * [3963] Create Grid With Exactly One Path
 */

// @lc code=start
class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans(m,string(n,'#'));
        for(int i=0;i<n;i++){
            ans[0][i]='.';
        }
        for(int j=0;j<m;j++){
            ans[j][n-1]='.';
        }
        return ans;        
    }
};
// @lc code=end

