class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //check rows,
        for(int i = 0; i < 9; i++){
            unordered_set<char> valid;
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                if(valid.contains(board[i][j])) return false;
                valid.insert(board[i][j]);
            }
        }

        //check colunms
        for(int i = 0; i < board.size(); i++){
            unordered_set<char> valid;
            for(int j = 0; j < board.size(); j++){
                if(board[j][i] == '.') continue;
                if(valid.contains(board[j][i])) return false;
                valid.insert(board[j][i]);
            }
        }

        //check squares
        vector<unordered_set<char>> boxes(9);
        for(int row = 0; row < 9; row++){
            for(int col = 0; col < 9; col++){
                if(board[row][col] == '.') continue;
                int coord = (row/3) * 3 + col / 3;
                if(boxes[coord].count(board[row][col])) return false;
                boxes[coord].insert(board[row][col]);
            }
        }

        return true;
    }
};
