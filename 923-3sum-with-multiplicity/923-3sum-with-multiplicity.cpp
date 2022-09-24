class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
        int ans=0;
        int mod=1e9+7;
        
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        
        for(int i=0;i<n-2;i++)
        {
            int low=i+1;
            int high=n-1;
            
            while(low<high)
            {
                
            
            if(arr[low]+arr[high]+arr[i]==target)
            {
                int cl=1;
                int ch=1;
                
                while(low<high && arr[low]==arr[low+1])
                {
                    low++;
                    cl++;
                }
                
                while(low<high && arr[high]==arr[high-1])
                {
                    high--;
                    ch++;
                }
                
                if(low==high)
                {
                    ans=(ans+cl*(cl-1)/2)%mod;
                }
                
                else
                {
                    ans=(ans+ch*cl)%mod;
                    
                }
                
                low++;
                high--;
                    
                
            }
                
                
            else if(arr[low]+arr[i]+arr[high]>target)
            {
                high--;
            }
                
            else
            {
                low++;
            }
            
            
        }
        }
        
            return ans;
    }
};