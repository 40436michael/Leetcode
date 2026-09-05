/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */
// @status: unfamiliar
// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>> umap;
        //正方0~8 直的9~17 橫的18~26
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')
                    continue;
                if(umap[i+18].contains(board[i][j]))
                    return false;
                umap[i+18].insert(board[i][j]);
                if(umap[j+9].contains(board[i][j]))
                    return false;
                umap[j+9].insert(board[i][j]);
                int n=(i/3)*3+j/3;
                
                if(umap[n].contains(board[i][j]))
                    return false;
                umap[n].insert(board[i][j]);
            }
        }
        return true;
    }
};
// @lc code=end

