class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_map<int, std::unordered_set<char>> rows;
        std::unordered_map<int, std::unordered_set<char>> cols;
        std::unordered_map<int, std::unordered_set<char>> boxes;

        for( int r = 0; r < 9; r++){
            for( int c = 0; c < 9; c++){
                if(board[r][c] == '.')
                    continue;

                int boxIndex = (r / 3) * 3 + (c / 3); //trong boxes có 9 ô con
                if(rows[r].count(board[r][c]) || cols[c].count(board[r][c]) || boxes[boxIndex].count(board[r][c]) ){
                    return false;
                }

                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                boxes[boxIndex].insert(board[r][c]);
            }
        }
        return true;


    }
};