class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int count=0;
        int lastp=-1;
        int lastg=-1;
        int lastm=-1;
        
        for(int i=0;i<garbage.size();i++)
        {
            for(auto c:garbage[i])
            {
                count++;
                
                if(c=='G')
                {
                    lastg=i;
                }
                
                if(c=='M')
                {
                    lastm=i;
                }
                
                if(c=='P')
                {
                    lastp=i;
                }
            }
        }
        
        int ans=count;
        
        for(int i=1;i<travel.size();i++)
        {
            travel[i]=travel[i]+travel[i-1];
            
        }
        
        if(lastm>0)
        {
            ans+=travel[lastm-1];
        }
        
        if(lastg>0)
        {
            ans+=travel[lastg-1];
        }
        
        if(lastp>0)
        {
            ans+=travel[lastp-1];
        }
        
        
        return ans;
    }
};