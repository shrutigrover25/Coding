class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<double>v;
        
        for(double i=0;i<nums1.size();i++)
        {
            v.push_back(nums1[i]);
        }
        
        for(double i=0;i<nums2.size();i++)
        {
            v.push_back(nums2[i]);
        }
        
        sort(v.begin(),v.end());
        
        int n=v.size();
        
        if(n%2!=0)
        {
            return v[n/2.00000];
        }
        
        else
            return (v[n/2]+v[n/2-1])/2.00000;
        
        
    }
};