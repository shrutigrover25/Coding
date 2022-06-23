class Solution {
public:
    
bool issafe(int row, int col, vector<string>board, int n)
{
    int dubrow=row;
    int dubcol=col;
    
    while(dubrow>=0 && dubcol>=0)
    {
        if(board[dubrow][dubcol]=='Q')
        {
            return false;
        }
        
        dubcol--;
        dubrow--;
    }
    
     dubrow=row;
     dubcol=col;
    
    while(dubcol>=0)
    {
        if(board[dubrow][dubcol]=='Q')
        {
            return false;
        }
        
        dubcol--;
    }
    
    dubrow=row;
    dubcol=col;
    
    
    while(dubrow<n && dubcol>=0)
    {
        if(board[dubrow][dubcol]=='Q')
        {
            return false;
        }
        
        dubrow++;
        dubcol--;
        
    }
   
    return true;
}
void solve(int col,vector<string> &board, vector<vector<string>>&ans, int n)
{
    if(col==n)
    {
        ans.push_back(board);
        return;
    }
    
    for(int row=0;row<n;row++)
    {
        if(issafe(row,col,board,n))
        {
            board[row][col]='Q';
            solve(col+1,board,ans,n);
            board[row][col]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        vector<vector<string>>ans;
        
        string s(n ,'.');
        
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        
        solve(0,board,ans,n);
        return ans;
    }
    
};