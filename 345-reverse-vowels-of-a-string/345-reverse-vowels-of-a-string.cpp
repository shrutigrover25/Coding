class Solution {
public:
    
bool isvowel(char c)
{
    if(c=='a' || c=='e' || c=='o' || c=='u' || c=='i' || c=='A' || c=='E' || c=='I' || c=='U' || c=='O')
    {
        return true;
    }
    
    return false;
}
    string reverseVowels(string s) {
        
        int n=s.length();
        int l=0;
        int h=n-1;
        
        while(l<=h)
        {
            if(!isvowel(s[l]))
            {
                l++;
                continue;
            }
            
            if(!isvowel(s[h]))
            {
                h--;
                continue;
            }
            
            swap(s[l],s[h]);
            l++;
            h--;
        }
        
        return s;
        
    }
};