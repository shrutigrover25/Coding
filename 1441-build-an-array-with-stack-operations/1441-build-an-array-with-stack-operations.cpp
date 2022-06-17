class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector<string>v;
        
        int j=1;
        int i=0;
        
        while(j<=n && i<target.size())
        {
            if(target[i]==j)
            {
                v.push_back("Push");
                j++;
                i++;
            }
            
            else
            {
                v.push_back("Push");
                v.push_back("Pop");
                j++;
            }
        }
        
        return v;
        
    }
};