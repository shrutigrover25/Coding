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
    
    int findsumpath(TreeNode* root, int &maxii)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int ls=max(0,findsumpath(root->left,maxii));
        int rs=max(0,findsumpath(root->right,maxii));
        int value=root->val;
        
        maxii=max(maxii,ls+rs+value);
        
        return max(ls,rs)+value;
    }
    int maxPathSum(TreeNode* root) {
        
        int maxii=INT_MIN;
        findsumpath(root,maxii);
        return maxii;
        
    }
};