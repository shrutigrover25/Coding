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
    int postorderIndex;
    TreeNode* Tree(vector<int>& inorder,vector<int>& postorder, int s, int e){
        if(s > e) return NULL;
        TreeNode* root = new TreeNode(postorder[postorderIndex]);
        postorderIndex--;
        int inorderIndex;
        auto it = find(inorder.begin(), inorder.end(), root->val);
        inorderIndex = it - inorder.begin();

        root->right = Tree(inorder, postorder, inorderIndex + 1, e);
        root->left = Tree(inorder, postorder, s, inorderIndex - 1);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        postorderIndex = postorder.size() - 1;
        TreeNode* result = Tree(inorder, postorder, 0, postorder.size() - 1);
        return result;
    }
};