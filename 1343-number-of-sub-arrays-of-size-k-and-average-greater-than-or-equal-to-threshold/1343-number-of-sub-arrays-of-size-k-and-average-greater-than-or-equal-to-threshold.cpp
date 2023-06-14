class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int i=0;
        int j=0;
        int n=arr.size();
        
        int sum=0;
        int count=0;
        
        
        for(i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        
        while(i<n)
        {
            if(sum/k>=threshold)
            {
                count++;
            }
            
            sum+=arr[i];
            sum-=arr[j];
            i++;
            j++;
        }
        
        if(sum/k>=threshold)
        {
            count++;
        }
        
        return count;
        
        
        
        
        
    }
};