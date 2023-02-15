class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int i=num.size()-1;
        
        vector<int>sumii;
        int carry=0;
        
        while(i>=0 || k>0 || carry>0)
        {
            int sum=carry;
            
            if(k>0)
            {
                int rem=k%10;
                sum+=rem;
                k=k/10;
            }
            
            if(i>=0)
            {
                sum+=num[i];
                i--;
            }
            
            carry=sum/10;
            sumii.push_back(sum%10);
            
        }
        
        reverse(sumii.begin(),sumii.end());
        
        return sumii;
    }
};