class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int count=0;
        int total=n*n;
        vector<vector<int>>ans(n,vector<int>(n,0));
        
        int min_row=0;
        int max_row=n-1;
        int min_col=0;
        int max_col=n-1;
        
        while(count<total)
        {
            for(int i=min_row, j=min_col;j<=max_col && count<total;j++)
            {
                ans[i][j]=count+1;
                count++;
            }
            
            min_row++;
            
            for(int i=min_row,j=max_col;i<=max_row && count<total;i++)
            {
                ans[i][j]=count+1;
                count++;
            }
            
            max_col--;
            
            for(int i=max_row,j=max_col;j>=min_col && count<total;j--)
            {
                ans[i][j]=count+1;
                count++;
            }
            
            max_row--;
            
            for(int i=max_row,j=min_col;i>=min_row && count<total;i--)
            {
                ans[i][j]=count+1;
                count++;
            }
            
            min_col++;
        }
        
        return ans;
    }
};