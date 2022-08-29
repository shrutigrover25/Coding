class Solution {
public:
    bool startsHere(vector<vector<char>>& board, int x, int y, string& word, int idx) {
        if (idx == word.size()) return true;
        if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || 
            board[x][y] == '.' || board[x][y] != word[idx]) return false;
        
        char c = board[x][y];
        board[x][y] = '.';
        bool res = startsHere(board, x+1, y, word, idx+1) ||
                   startsHere(board, x-1, y, word, idx+1) ||
                   startsHere(board, x, y+1, word, idx+1) ||
                   startsHere(board, x, y-1, word, idx+1);
        board[x][y] = c;
        return res;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (startsHere(board, i, j, word, 0)) return true;
            }
        }
        return false;
    }
};