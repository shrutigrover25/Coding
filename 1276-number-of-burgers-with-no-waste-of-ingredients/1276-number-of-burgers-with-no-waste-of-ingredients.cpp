class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        
        if(tomatoSlices%2!=0)
        {
            return {};
        }
        
        int m, n;
        
        m=(tomatoSlices-2*cheeseSlices)/2;
        n=(4*cheeseSlices-tomatoSlices)/2;
        
        if(m<0 || n<0)
        {
            return {};
        }
        
        vector<int>ans;
        ans.push_back(m);
        ans.push_back(n);
        
        return ans;
        
    }
};