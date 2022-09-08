class Solution {
public:
    
int findhours(vector<int>&piles,int mid)
{
    int hours=0;
    
    for(int i=0;i<piles.size();i++)
    {
        if(piles[i]%mid==0)
        {
            hours+=piles[i]/mid;
        }
        
        else
        {
            hours+=(piles[i]/mid)+1;
        }
    }
    
    return hours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low=1;
        int high=1000000000;
        
        /*for(int i=0;i<piles.size();i++)
        {
            if(piles[i]>high)
            {
                high=piles[i];
            }
        }*/
        
        int ans;
        
        while(low<high)
        {
            int mid=(low+high)/2;
           
            int hours=findhours(piles,mid);
            if(hours>h)
            {
                low=mid+1;
            }
            
            else{
                
                high=mid;
            }
        }
        
        return low;
        
    }
};