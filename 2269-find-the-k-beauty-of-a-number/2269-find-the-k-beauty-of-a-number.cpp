class Solution {
public:
    int divisorSubstrings(int num, int k) {
        
        string s=to_string(num);
        
        int n=s.length();
        
        int count=0;
        
        int i=0;
        int j=0;
        
        while(j<n)
        {
            if(j-i+1!=k)
            {
                j++;
            }
            
            else if(j-i+1==k)
            {
            string str=s.substr(i,k);
            
            int num2=stoi(str);
            
            if(num2!=0 && num%num2==0)
            {
                count++;
            }
            
            i++;
            j++;
            }
        }
        
        return count;
        
    }
};