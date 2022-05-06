class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int>v;
        
        int n=digits.size();
        
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
                
            }
            
            else
            {
                digits[i]+=1;
                break;
            }
            
        }
        
        if(digits.at(0)==0)
        {
            digits.insert(digits.begin(),1);
        }
        
        return digits;
        
    }
    
    
};