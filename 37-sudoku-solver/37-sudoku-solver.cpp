class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        
        solve(board);
        
    }
    
    bool solve(vector<vector<char>>&board)
    {
        
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='.')
                {
                
                for(char c='1';c<='9';c++)
                {
                    if(isvalid(i,j,board,c))
                    {
                        board[i][j]=c;
                    
                    
                    if(solve(board)==true)
                    {
                        return true;
                    }
                    
                    else
                    {
                        board[i][j]='.';
                    }
                    }
                }
                 return false;   
                }
                
                
            }
        }
        
        return true;
    }
    
    
    bool isvalid(int row, int col, vector<vector<char>>&board, char c)
    {
        int n=board.size();
        
        for(int i=0;i<n;i++)
        {
            if(board[i][col]==c)
            {
                return false;
            }
            
            if(board[row][i]==c)
            {
                return false;
            }
            
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
            {
                return false;
            }
        }
        
        return true;
    }
};