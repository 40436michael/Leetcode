/*
 * @lc app=leetcode id=1385 lang=cpp
 *
 * [1385] Find the Distance Value Between Two Arrays
 */

// @lc code=start
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int ans=0;
        for (int i:arr1) {
            int min_d=abs(i-arr2[0]);
            for (int j=1;j<arr2.size();j++) {
                int now_d=abs(i-arr2[j]);
                if (now_d>min_d)
                    break;   
                min_d=now_d;
            }
            if (min_d>d) ans++;
        }
        return ans;
    }
};
// @lc code=end

