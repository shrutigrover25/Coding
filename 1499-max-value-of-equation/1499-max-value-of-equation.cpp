class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,int>> q;
        
        int ans=INT_MIN;
        
        for(int i=0;i<points.size();i++)
        {
            while((!q.empty()) && (points[i][0]-q.top().second>k))
            {
                q.pop();
            }
            
            if(!q.empty())
            {
                ans=max(ans,points[i][0]+points[i][1]+q.top().first);
            }
            
            q.push({points[i][1]-points[i][0],points[i][0]});
        }
        
        return ans;
        
    }
};