class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
     
        
        priority_queue<pair<int,int>>pq;
        vector<int>v;
        
        for(int i=0;i<arr.size();i++)
        {
            pq.push({abs(arr[i]-x),arr[i]});
            
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
        
        sort(v.begin(),v.end());
        
        return v;
    }
};