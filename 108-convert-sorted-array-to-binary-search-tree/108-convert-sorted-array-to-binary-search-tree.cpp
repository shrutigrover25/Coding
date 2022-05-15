/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
TreeNode* arraytree(vector<int>&nums,int start, int end)
{
   if(start>end)
   {
       return NULL;
   }
        
   int mid=(start+end)/2;
            
    TreeNode* root=new TreeNode(nums[mid]);
            
    root->left=arraytree(nums,start,mid-1);
            
    root->right=arraytree(nums,mid+1,end);
        
    
     return root;
    
    
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)
        {
            return NULL;
        }
         
       TreeNode* node= arraytree(nums,0,n-1);
       return node;
        
    }
};