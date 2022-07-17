class Solution {
    void nextPermutation(vector<int> &a){
        int n = a.size();
        int i = n-2;
        int index1 = -1, index2 = -1;
        while(i >= 0 && a[i] >= a[i+1]) i--;
        
        if(i == -1){
            reverse(a.begin(), a.end());
            return;
        }
        
        index1 = i;
        i = n-1;
        while(i > index1 && a[i] <= a[index1])  i--;
        index2 = i;

        swap(a[index1], a[index2]);
        reverse(a.begin()+index1+1, a.end());
    }
    
public:
    int nextGreaterElement(int z) {
        vector<int> a;
        int x = z;
        while(x){
            a.push_back(x%10);
            x/=10;
        }
        reverse(a.begin(), a.end());
        
        nextPermutation(a);
        int n = a.size();
        
        long long int y = 0;
        for(int i = 0; i < n; i++)   y = y*10 + a[i];
        
        if(y > z){   
            if(y <= INT_MAX)   return y;
            return -1;
        }
        return -1;
    }
};