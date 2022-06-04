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

TreeNode* btree(vector<int>&inorder, vector<int>& postorder, int start, int end,int &index,unordered_map<int,int>&mp)
{
    if(start>end)
        return 0;
    
    TreeNode* root=new TreeNode(postorder[index]);
    index--;
    
    if(start==end)
        return root;
    
    int px=mp[root->val];
    
    
    root->right=btree(inorder,postorder,px+1,end,index,mp);
    root->left=btree(inorder,postorder,start,px-1,index,mp);
    
    
    return root;
    
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[inorder[i]]=i;
        }
        
        int index=n-1;
        
        TreeNode* root=btree(inorder,postorder,0,n-1,index,mp);
        return root;
    }
};