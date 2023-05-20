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
    
    int callfunc(TreeNode* root, int &diameter)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int lh=callfunc(root->left,diameter);
        int rh=callfunc(root->right,diameter);
        
        diameter=max(diameter, lh+rh);
        
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        
        int diameter=INT_MIN;
        
        callfunc(root,diameter);
        
        return diameter;
        
        
    }
};