class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
       unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==2){
                nums.erase(nums.begin()+i);
                i--;
                continue;
            }
            mp[nums[i]]++;
        }
        int cn = 0;
        for(auto z:mp){
            cn = cn + z.second;
        }
        return cn;
    }
};