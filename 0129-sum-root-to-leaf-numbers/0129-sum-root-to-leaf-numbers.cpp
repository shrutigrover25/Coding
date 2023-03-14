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
    int ans=0;
    void solve(TreeNode* root, int val){
        if(!root->left && !root->right){
            val=val*10+root->val;
            ans+=val;
            return;
        }
        val=val*10+root->val;
        if(root->left)
            solve(root->left, val);
        if(root->right)
            solve(root->right, val);
    }
public:
    int sumNumbers(TreeNode* root) {
        solve(root, 0);
        return ans;
    }
};