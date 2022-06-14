class Solution {
public:
    int t[501][501];
    int LCS(string x,string y,int n,int m){
        if(n==0||m==0)
            return 0;
        if(t[n][m]!=-1)
            return t[n][m];
        if(x[n-1]==y[m-1]){
            return t[n][m]=1+LCS(x,y,n-1,m-1);
        }
        else{
            return t[n][m]=max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
        }
    }
    int minDistance(string word1, string word2) {
        memset(t,-1,sizeof(t));
        return word1.length()+word2.length()-2*LCS(word1,word2,word1.length(),word2.length());
    }
};