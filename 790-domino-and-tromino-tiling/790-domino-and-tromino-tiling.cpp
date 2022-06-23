class Solution {
public:
    int numTilings(int n) {
        
        vector<long>ans(1001,0);
        int md=1e9;
        md+=7;
        
        ans[0]=0;
        ans[1]=1;
        ans[2]=2;
        ans[3]=5;
        
        if(n<=3)
        {
            return ans[n];
        }
        
        for(int i=4;i<=n;i++)
        {
            ans[i]=(2*ans[i-1]+ans[i-3])%md;
        }
        
        return ans[n];
        
    }
};