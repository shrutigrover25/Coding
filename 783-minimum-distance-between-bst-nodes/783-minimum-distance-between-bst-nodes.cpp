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
    
    vector<int>vec;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        
        inorder(root);
        int diff = INT_MAX;
        for(int i=1;i<vec.size();i++)
            diff = min(diff,abs(vec[i]-vec[i-1]));
        return diff;
        
    }
};