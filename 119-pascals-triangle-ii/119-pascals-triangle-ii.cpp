class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>> result;
        for(int i = 0; i<=rowIndex; i++)
        {
            vector<int> vi(i+1, 1);
            for(int j = 1; j<i; j++)
            {
                vi[j] = result[i - 1] [j] + result [i-1] [j-1];
            }
            result.push_back(vi);
        }
        return result[rowIndex];
    }
};