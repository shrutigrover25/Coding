class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        int k=0;
        
        vector<vector<int>>ans;
        
        ans.push_back(intervals[0]);
        
        
        for(int i=1;i<intervals.size();i++)
        {
            if(ans[k][1]>=intervals[i][0])
            {
                ans[k][1]=max(ans[k][1],intervals[i][1]);
            }
            
            else
            {
                ans.push_back(intervals[i]);
                k++;
            }
        }
     
        
        return ans;
    }
};