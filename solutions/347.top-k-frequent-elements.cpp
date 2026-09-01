/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */
// @status: unfamiliar
// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        vector<int> ans;
        for(auto i:nums){
            umap[i]++;
        }
        vector<pair<int,int>> v(umap.begin(),umap.end());
        sort(v.begin(), v.end(), [](const auto& a, const auto& b){
            return a.second > b.second;  
        });

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
// @lc code=end

