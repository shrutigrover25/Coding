class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        
        
        int n=s1.length();
        int m=s2.length();
        
        if(m<n)
        {
            return false;
        }
        
        vector<int>mp1(26,0);
        vector<int>mp2(26,0);
        
        int i;
        
        for(i=0;i<n;i++)
        {
            mp1[s1[i]-'a']++;
            mp2[s2[i]-'a']++;
        }
        
        
        int left=i;
        int j=0;
        
        while(left<m)
        {
            if(mp1==mp2)
            {
                return true;
            }
            
            
            
            
            mp2[s2[left]-'a']++;
             left++;
            mp2[s2[j]-'a']--;
            
            j++;
        }
        
        if(mp1==mp2)
        {
            return true;
        }
        
        return false;
        
    }
};