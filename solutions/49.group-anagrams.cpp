/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @status: unfamiliar

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        vector<vector<string>> ans;
        for(const auto& i:strs){
            string key=i;
            sort(key.begin(),key.end());
            umap[key].push_back(i);
        }
        for(const auto& i:umap){
            ans.push_back(i.second);
        }
        return ans;        
    }
};
// @lc code=end

