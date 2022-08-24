class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int  n=bills.size();
        int countfive=0;
        int countten=0;
        int countwen=0;
        
        
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5)
            {
                countfive++;
            }
            
            else if(bills[i]==10)
            {
                
                if(countfive<1)
                {
                    return false;
                }
                
                else
                {
                countfive-=1;
                countten+=1;
            }
            }
            
            else if(bills[i]==20)
            {
               
                
                if(countfive<3 && countten<1)
                {
                    return false;
                }
                
                else if(countfive<1 && countten>=1)
                {
                    return false;
                }
                
                else if(countfive>=1 && countten>=1)
                {
                    countfive-=1;
                    countten-=1;
                }
                
                else if(countfive>=3 && countten<1)
                {
                    countfive-=3;
                }
                
                
            }
        }
        
        return true;
        
    }
};