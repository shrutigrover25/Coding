class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int>res;
        int n=nums.size();
        
        vector<int>freq(n+1,0);
        
        for(auto i:nums)
        {
            freq[i]++;
        }
        
        for(int i{1}; i<=n; ++i){
            if(!freq[i])
                res.push_back(i);
        }
        
        return res;
        
        
        
    }
};