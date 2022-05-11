class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        set<int>s;
        
        for(int i=0;i<candyType.size();i++)
        {
            if(s.find(candyType[i])==s.end())
            {
                s.insert(candyType[i]);
            }
        }
        
        int n=candyType.size();
        
        int k=s.size();
        
        if(k<=n/2)
        {
            return k;
        }
        
        return n/2;
        
    }
};