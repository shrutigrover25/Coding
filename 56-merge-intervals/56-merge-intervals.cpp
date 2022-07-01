class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>ans;
        int j=0;
        
        sort(intervals.begin(),intervals.end());
        
        ans.push_back(intervals[0]);
        
        for(int i=1;i<intervals.size();i++)
        {
            if(ans[j][1] >= intervals[i][0])
            {
                ans[j][1]=max(ans[j][1],intervals[i][1]);
            }
            
            else
            {
                ans.push_back(intervals[i]);
                j++;
            }
        }
        
        return ans;
    }
};