class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int n=sentences.size();
        
        int len=-1;
        
        
        for(int i=0;i<n;i++)
        {
            string s=sentences[i];
            int count=1;
            
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==' ')
                {
                    count++;
                }
            }
            
            len=max(len,count);
            
            
        }
        
        return len;
        
    }
};