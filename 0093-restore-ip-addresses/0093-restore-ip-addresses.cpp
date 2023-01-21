class Solution {
public:
    
void solve(string s, int i, int j, int level, string temp,
           vector<string>& res)
{
    if (i == (j + 1) && level == 5) {
        res.push_back(temp.substr(1));
    }
 
   
    for (int k = i; k < i + 3 && k <= j; k++) {
        string ad = s.substr(i, k - i + 1);
 
       
        if ((s[i] == '0'&&ad.size()>1) || stol(ad) > 255)
            return;
 
        
        solve(s, k + 1, j, level + 1, temp + '.' + ad, res);
    }
}
    
    
    vector<string> restoreIpAddresses(string s) {
        
        vector<string> ans;
        int n=s.length();
 
     solve(s, 0, n - 1, 1, "", ans);
        
        return ans;
        
    }
};