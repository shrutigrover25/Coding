class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int low=0;
        int n=nums.size();
        int high=n-1;
        
        while(low<high)
        {
            int mid = (low + high) / 2;
            if (mid % 2 == 1) {
                mid--;
            }
            if (nums[mid] != nums[mid + 1]) {
                high = mid;
            } else {
                low = mid + 2;
            }
        }
        return nums[low];
        
        
    }
};