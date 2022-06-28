class Solution {
public:
    

    string shortestCommonSupersequence(string str1, string str2) {
        
        int p=str1.length();
        int m=str2.length();
        
        int dp[p+1][m+1];
        

        for(int i=0;i<=p;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0)
                {
                    dp[i][j]=j;
                }
                
               else if(j==0)
                {
                    dp[i][j]=i;
                }
                
                else if(str1[i-1]==str2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                
                else
                {
                    dp[i][j]=1+min(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        string str;
        
        int i=p,j=m;
        
        while(i>0 && j>0)
        {
            if(str1[i-1]==str2[j-1])
            {
                str.push_back(str1[i-1]);
                i--;
                j--;
            }
            
            else if(dp[i-1][j]>dp[i][j-1])
            {
                str.push_back(str2[j-1]);
                j--;
                
            }
            
            else
            {
                
                str.push_back(str1[i-1]);
                i--;
            }
        }
        
        while(i>0)
        {
            str.push_back(str1[i-1]);
            i--;
        }
        
        while(j>0)
        {
            str.push_back(str2[j-1]);
            j--;
        }
        
        
        reverse(str.begin(),str.end());
        
        return str;
        
    }
};