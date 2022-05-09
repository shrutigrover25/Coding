class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int column=matrix[0].size();
        int col=1;
        
        for(int i=0;i<row;i++)
        {
            if(matrix[i][0]==0)
            {
                col=0;
            }
            
            for(int j=1;j<column;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        for(int i=row-1;i>=0;i--)
        {
            for(int j=column-1;j>=1;j--)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
            
            if(col==0)
            {
                matrix[i][0]=0;
            }
        }
        
    }
};