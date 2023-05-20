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
    
void callfunc(TreeNode* root, vector<int>&v)
{
    if(root->left!=NULL)
    {
        callfunc(root->left,v);
    }

    if(root->right!=NULL)
    {
        callfunc(root->right,v);
    }
          
    v.push_back(root->val);
      
}
    vector<int> postorderTraversal(TreeNode* root) {
        
          vector<int>v;
        
        if(root==NULL)
        {
            return v;
        }
        
        callfunc(root,v);
        
        return v;
        
    }
};