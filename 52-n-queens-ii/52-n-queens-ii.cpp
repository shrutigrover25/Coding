class Solution {
public:
    
char board[1001][1001];

bool issafe(int row, int col, int n)
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
    
void solve(int col, int n, int &count)
{
    if(col==n)
    {
        count++;
    }
    
    for(int rows=0;rows<n;rows++)
    {
        if(issafe(rows,col,n))
        {
            board[rows][col]='Q';
            solve(col+1,n,count);
            board[rows][col]='.';
        }
    }
}
    int totalNQueens(int n) {
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            board[i][j]='.';
        }
    }
    
    int count=0;
    solve(0,n,count);
    return count;
        
    }
};