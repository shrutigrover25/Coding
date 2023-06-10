class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
        map<int,int>mp;
        
        if(hand.size()%groupSize!=0)
        {
            return false;
        }
        
        for(int i=0;i<hand.size();i++)
        {
            mp[hand[i]]++;
        }
        
         while(!mp.empty())
        {
            int first=mp.begin()->first;
            
            for(int i=first; i< first+groupSize ;i++)
            {
                 if(mp.find(i)==mp.end()){
                    return false;
                }
                
                mp[i]--;
                
                if(mp[i]==0)
                {
                    mp.erase(i);
                }
            }
        }
        
        
        return true;
        
    }
};