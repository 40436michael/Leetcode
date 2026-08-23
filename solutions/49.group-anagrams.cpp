/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> table;
        vector<vector<string>> ans;
        string tmp;
        string s;
        ans.push_back({strs[0]});
        for(int i=1;i<strs.size();i++){
            bool found_anagrams=false; 
            s=strs[i];
            sort(s.begin(),s.end());
            for(int j=0;j<ans.size();j++){
                tmp=ans[j][0];
                sort(tmp.begin(),tmp.end());
                if(s==tmp){
                    ans[j].push_back(strs[i]);
                    found_anagrams=true;
                    break;
                }                
            }
            if(!found_anagrams){
                ans.push_back({strs[i]});
            }

        }
        return ans;        
    }
};
// @lc code=end

