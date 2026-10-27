/*
 * @lc app=leetcode id=2409 lang=cpp
 *
 * [2409] Count Days Spent Together
 */

// @lc code=start
class Solution {
public:
    vector<int> month_day={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dateToDayOfYear(string date) {
        int month=stoi(date.substr(0, 2));
        int day=stoi(date.substr(3, 2));        
        int dayOfYear = day;
        for (int i=0;i<month-1;i++) {
            dayOfYear+=month_day[i];
        }
        return dayOfYear;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int arriveAliceDay=dateToDayOfYear(arriveAlice);
        int leaveAliceDay=dateToDayOfYear(leaveAlice);
        int arriveBobDay=dateToDayOfYear(arriveBob);
        int leaveBobDay=dateToDayOfYear(leaveBob);
        int arrive=max(arriveAliceDay,arriveBobDay);
        int leave=min(leaveAliceDay,leaveBobDay);
        return max(0,leave-arrive+1);
    }
};
// @lc code=end

