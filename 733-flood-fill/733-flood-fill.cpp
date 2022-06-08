class Solution {
public:
    
void dfs(vector<vector<int>>& image, int sr, int sc,int row,int col,int source, int newColor)
{
    if(sr<0 || sr>=row || sc<0 || sc>=col)
        return;
    
    else if(image[sr][sc]!=source)
        return;
    
    image[sr][sc]=newColor;
    
    dfs(image,sr+1,sc,row,col,source,newColor);
    dfs(image,sr-1,sc,row,col,source,newColor);
    dfs(image,sr,sc-1,row,col,source,newColor);
    dfs(image,sr,sc+1,row,col,source,newColor);
    
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        if(image[sr][sc]==newColor)
        {
            return image;
        }
        
        int row=image.size();
        int col=image[0].size();
        int source=image[sr][sc];
        dfs(image,sr,sc,row,col,source,newColor);
        return image;
        
    }
};