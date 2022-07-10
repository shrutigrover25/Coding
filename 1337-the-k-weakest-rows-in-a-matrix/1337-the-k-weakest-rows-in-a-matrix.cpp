class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        vector<int>v;
        priority_queue<pair<int,int>>pq;
        
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n;i++)
        {
            int count=0;

            for(int j=0;j<m;j++)
            {
              if(mat[i][j]==1)
              {
                count++;
               }
            }
            
            pq.push({count,i});
            
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(v.begin(),v.end());
        
        
        return v;
    }
};