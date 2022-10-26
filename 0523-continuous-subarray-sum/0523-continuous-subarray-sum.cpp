class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int n = nums.size();

        int curr_sum = 0;


        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++)
        {

            curr_sum += nums[i];


            if(curr_sum % k == 0 && i > 0)
            {
                return true;
            }

            if(mp.count(curr_sum % k) && (i - mp[curr_sum % k] >= 2))
            {
                return true;
            }

            if(mp.count(curr_sum % k) == 0)
            {
                mp[curr_sum % k] = i;
            }
        }

        return false;
    }
};