/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */
// @status: unfamiliar
// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset(nums.begin(), nums.end());
        int ans=0;

        for(auto i:uset){
            if(uset.count(i-1)==0){
                int current_num=i;
                int current_len=1;
                while(uset.count(current_num+1)>0){
                    current_num++;
                    current_len++;
                }
                ans=max(ans,current_len);
            }
        }
        return ans;

    }
};
// @lc code=end

