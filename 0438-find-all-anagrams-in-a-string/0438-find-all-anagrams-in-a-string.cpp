class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>main(26,0);
        vector<int>sub(26,0);
        
        int n=s.length();
        int m=p.length();
        
        vector<int>ans;
        
        if(n<m)
        {
            return ans;
        }
        
        int i=0;
        
        for(i=0;i<m;i++)
        {
            main[s[i]-'a']++;
            sub[p[i]-'a']++;
        }
        
        i--;
        
        int j=0;
        int left=i;
        
        
        while(left<n)
        {
            if(main==sub)
            {
                ans.push_back(j);
            }
            
            left++;
            
            if(left!=n)
            {
                main[s[left]-'a']++;
            }
            
            main[s[j]-'a']--;
            
            j++;
            
            
         }
    
        
        return ans;
        
        
        
    }
};