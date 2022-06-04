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
    
int pre;
    
TreeNode* wraptree(vector<int>&preorder, vector<int>& inorder, int start, int end, unordered_map<int,int>&mp)
{
    if(start>end)
        return 0;
    
    
    TreeNode* root=new TreeNode(preorder[pre++]);
    
    if(start==end)
        return root;
    
    int index=mp[root->val];
    
   root->left= wraptree(preorder,inorder,start,index-1,mp);
   root->right=wraptree(preorder,inorder,index+1,end,mp);
    
    
    return root;
}
    

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {  
    int n= preorder.size();
    unordered_map<int,int>mp;
        
    pre=0;
    
    for(int i=0;i<n;i++)
    {
        mp[inorder[i]]=i;
    }
    
     TreeNode* root= wraptree(preorder,inorder,0,n-1,mp);

      return root;
    }
};