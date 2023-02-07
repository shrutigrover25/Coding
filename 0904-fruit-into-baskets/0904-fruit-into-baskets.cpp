class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        unordered_map<int,int>mp;
        
        int l=0;
        int r=0;
        
        int ans=INT_MIN;
        
        int n=fruits.size();
        
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