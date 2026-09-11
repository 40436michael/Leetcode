/*
 * @lc app=leetcode id=3483 lang=cpp
 *
 * [3483] Unique 3-Digit Even Numbers
 */
// @lc code=start
class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        unordered_set<int> ans;
        for(int i=0;i<n;i++){
            if(digits[i]==0)
                continue;
            for(int j=0;j<n;j++){
                if(j==i)
                    continue;
                for(int k=0;k<n;k++){
                    if(k==i||k==j)
                        continue;
                    if(digits[k]%2==1)
                        continue;
                    ans.insert(digits[i]*100+digits[j]*10+digits[k]);
                }
            }
        }
        return ans.size();
    }
};
// @lc code=end

