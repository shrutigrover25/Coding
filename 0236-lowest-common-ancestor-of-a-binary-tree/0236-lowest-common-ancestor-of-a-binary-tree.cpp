/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL)
        {
            return root;
        }
        
        if(root->val==p->val || root->val==q->val)
        {
            return root;
        }
        
        TreeNode* curr=lowestCommonAncestor(root->left,p,q);
        TreeNode* head=lowestCommonAncestor(root->right,p,q);
        
        if(curr==NULL)
        {
            return head;
        }
        
        if(head==NULL)
        {
            return curr;
        }
        
        
        return root;
    }
};