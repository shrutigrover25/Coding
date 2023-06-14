class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int l=0;
        int r=0;
        
        int n=fruits.size();
        
        map<int,int>mp;
        
        int ans=0;
        
        while(r<n)
        {
            mp[fruits[r]]++;
            
            
            while(mp.size()>2)
            {
                mp[fruits[l]]--;
                
                
                if(mp[fruits[l]]==0)
                {
                    mp.erase(fruits[l]);
                }
                
                
                l++;
            }
            
            ans=max(ans,r-l+1);
            r++;
        }
        
        return ans;
        
    }
};