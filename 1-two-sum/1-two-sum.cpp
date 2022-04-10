class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ump; //key-->  number , value --> index
        vector<int> ans;
        for(int i=0; i< nums.size();i++){
            if(ump.find(target-nums[i])!=ump.end()){
                    ans.push_back(i);
                    ans.push_back(ump[target-nums[i]]);
                    return ans;
            }
            else{
                ump[nums[i]]=i;
            }
        }
        return ans;
    }
    
};