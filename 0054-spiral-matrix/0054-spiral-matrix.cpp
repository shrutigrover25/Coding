class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>ans;
        int n=matrix.size(); //number of rows;
        int m=matrix[0].size();
        
        int top=0;
        int left=0;
        int bottom=n-1;
        int right =m-1;
        
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            
            top++;
            
            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(matrix[i][right]);
            }
            
            right--;
            
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[bottom][i]);
                }
                
                bottom--;
            }
            
            
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                
                left++;
            }
            
        }
        
        return ans;
    }
};