
   class Solution {
public:
	int findShortestSubArray(vector<int>& nums) {
		map<int,int>mp;
		int t=0;
		vector<int>v;
		for(int i=0;i<nums.size();i++) mp[nums[i]]++;
		for(auto i:mp) t=max(t,i.second);
		for(auto i:mp) {
			if(i.second==t)v.push_back(i.first);
		}
		int ans=INT_MAX;
		for(int k=0;k<v.size();k++){
			int i=0,j=nums.size()-1;
			while(j>=i){
				if(nums[i]!=v[k])i++;
				if(nums[j]!=v[k])j--;
				if(nums[i]==v[k] && nums[j]==v[k]){
					ans=min(ans,j-i+1);
					break;
				}    
			}
		}
		return ans;
	}
};