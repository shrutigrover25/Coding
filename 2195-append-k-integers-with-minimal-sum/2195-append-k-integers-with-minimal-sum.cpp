class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
        long long sum=((long long) k*(k+1)/2);
        
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        
        while(!pq.empty() && pq.top()<=k)
        {
            int ans=pq.top();
            pq.pop();
            
            while(!pq.empty() && pq.top()==ans)
            {
                pq.pop();
            }
            
            sum-=ans;
            sum+=k+1;
            k++;
        }
        
        return sum;
        
    }
};