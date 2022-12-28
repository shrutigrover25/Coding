class Solution {
    int findMaxIdx(vector<int>& A, int idx) {
        
        int mx = A[0], mxidx = 0;
        for (int i = 0; i <= idx; i++) {
            if (A[i] > mx) {
                mxidx = i;
                mx = A[i];
            }
        }
        return mxidx;
    }
    
public:
    vector<int> pancakeSort(vector<int>& A) {
        
        int n = A.size();
        vector<int>res;
        for (int i = n-1; i >= 0; i--) {
            int x = findMaxIdx(A, i);
            cout<<x<<" "<<i<<" "<<endl;
            res.push_back(x+1);
            res.push_back(i+1);
            for(auto it:res)
            {
                cout<<it<<" ";
            }
            
            cout<<endl;
            
            reverse(A.begin(), A.begin()+x+1);
            reverse(A.begin(), A.begin()+i+1);
        }
        
        return res;
    }
};