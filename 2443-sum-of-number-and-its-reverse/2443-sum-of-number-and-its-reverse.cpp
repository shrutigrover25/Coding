class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        
        for(int i=num/2;i<=num;i++)
        {
            int midval=i;
            
            string s=to_string(midval);
            
            reverse(s.begin(),s.end());
            
            int num2=stoi(s);
            
            if(midval+num2==num)
            {
                return true;
            }
        
        }
        
        return false;
        
    }
};