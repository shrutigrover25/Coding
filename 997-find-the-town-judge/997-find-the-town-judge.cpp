class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int>v(n+1,0);
        
        for(auto it:trust)
        {
            v[it[0]]--;
            v[it[1]]++;
        }
        
        for(int i=1;i<=n;i++)
        {
            int x=v[i];
            
            if(x==n-1)
            {
                return i;
            }
        }
        
        return -1;
        
    }
};