class Solution {
public:
    int visited[6][11];
    bool findWord(vector<vector<char>>& board, 
    string word, int i, int j, int m, int n, int wordIndex) {
        if(wordIndex == word.length()) return true;

        if(i < 0 || j < 0 || i >= m || j >= n || board[i][j] != word[wordIndex] || visited[i][j] == 1) return false;
        
        visited[i][j] = 1;
        bool down = findWord(board, word, i + 1, j, m, n, wordIndex + 1);
        bool right = findWord(board, word, i, j + 1, m, n, wordIndex + 1);
        bool left = findWord(board, word, i, j - 1, m, n, wordIndex + 1);
        bool top = findWord(board, word, i - 1, j, m, n, wordIndex + 1);
        visited[i][j] = 0;
        return down or right or left or top;

    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[i].size(); j++) {
                if(findWord(board, word, i, j, board.size(), board[i].size(), 0)) return true;
            }
        }
        return false;
    }
};
