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
    bool isSame(TreeNode* x, TreeNode* y){
    if(x == NULL or y == NULL) return x==y;
    
    if(x->val != y->val) return false;
    return isSame(x->left, y->left) and isSame(x->right, y->right);
}

bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if(root == NULL) return root == subRoot;
    bool flag = isSame(root, subRoot);
    
    return flag or isSubtree(root->left, subRoot) or isSubtree(root->right, subRoot);
}
};