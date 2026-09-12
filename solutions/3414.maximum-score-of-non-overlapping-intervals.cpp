/*
 * @lc app=leetcode id=3414 lang=cpp
 *
 * [3414] Maximum Score of Non-overlapping Intervals
 */
// @status: unfamiliar
// @lc code=start
class Solution {
public:
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n=intervals.size();
        // {left, right, weight, 原始索引},依 left 由小到大排序
        vector<array<long long, 4>> iv(n);
        for (int i = 0; i < n; i++) {
            iv[i] = {intervals[i][0], intervals[i][1], intervals[i][2], i};
        }
        sort(iv.begin(), iv.end(), [](const array<long long, 4>& a, const array<long long, 4>& b) {
            return a[0] < b[0];
        });

        // memo[i][quota] = {分數, 選中的原始索引陣列(已排序)}
        // 分數用 -1 代表「尚未計算」的標記(合法分數不可能是負的)
        vector<vector<pair<long long, vector<int>>>> memo(
            n, vector<pair<long long, vector<int>>>(5, {-1, {}}));

        function<pair<long long, vector<int>>(int, int)> dp =
            [&](int i, int quota) -> pair<long long, vector<int>> {
            if (i == n || quota == 0) return {0, {}};
            if (memo[i][quota].first != -1) return memo[i][quota];

            // 選擇一:跳過第 i 個區間
            auto skip = dp(i + 1, quota);

            // 選擇二:選第 i 個區間
            long long r = iv[i][1], w = iv[i][2];
            int origIdx = (int)iv[i][3];

            // 二分搜尋:找左端點嚴格大於 r 的第一個位置(端點相接視為重疊)
            int lo = i + 1, hi = n;
            while (lo < hi) {
                int mid = (lo + hi) / 2;
                if (iv[mid][0] > r) hi = mid;
                else lo = mid + 1;
            }
            auto nextRes = dp(lo, quota - 1);

            vector<int> pickedIndices = nextRes.second;
            pickedIndices.push_back(origIdx);
            sort(pickedIndices.begin(), pickedIndices.end());

            pair<long long, vector<int>> pick = {w + nextRes.first, pickedIndices};

            // 分數高者優先;分數相同則選索引陣列字典序較小的
            if (pick.first > skip.first ||
                (pick.first == skip.first && pick.second < skip.second)) {
                return memo[i][quota] = pick;
            }
            return memo[i][quota] = skip;
        };

        return dp(0, 4).second;
    }
};
// @lc code=end

