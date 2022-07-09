class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
      priority_queue<pair<int,pair<int,int>>>pq;
      
        
      for(int i=0;i<points.size();i++)
      {
          pq.push(make_pair(points[i][0]*points[i][0]+points[i][1]*points[i][1],make_pair(points[i][0],points[i][1])));
          
          if(pq.size()>k)
          {
              pq.pop();
          }
      }
        
    vector<vector<int>>res;
        
    while(pq.size())
    {
        pair<int,pair<int,int>>ans=pq.top();
        pq.pop();
        vector<int>v;
        int m=ans.second.first;
        int n=ans.second.second;
        
        v.push_back(m);
        v.push_back(n);
        
        res.push_back(v);
    }
        return res;
    }
};