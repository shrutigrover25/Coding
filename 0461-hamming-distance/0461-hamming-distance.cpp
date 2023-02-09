class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int ans = 0;
        string s = bitset<32>(x).to_string();
        string t = bitset<32>(y).to_string();
        for(int i=0;i<32;i++) if(s[i]!=t[i]) ans++;
        return ans;
        
    }
};