class Solution {
public:
    
void dfs(int sr, int sc,vector<vector<int>>& image, int color, int prevcol, int n, int m )
{
    if(sr<0 || sr>=n || sc<0 || sc>=m || image[sr][sc]!=prevcol)
    {
        return;
    }
    
    image[sr][sc]=color;
    
    dfs(sr+1,sc,image,color,prevcol,n,m);
    dfs(sr,sc+1,image,color,prevcol,n,m);
    dfs(sr-1,sc,image,color,prevcol,n,m);
    dfs(sr,sc-1,image,color,prevcol,n,m);
    
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n=image.size();
        int m=image[0].size();
        
        if(image[sr][sc]==color)
        {
            return image;
        }
        
        int prevcol=image[sr][sc];
        
        
            dfs(sr,sc,image,color,prevcol,n,m);
        
        
        return image;
        
    }
};