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
    
int height(TreeNode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    int lh=height(root->left);
    int rh=height(root->right);
    
    return max(lh,rh)+1;
}
    
int levelorder(TreeNode* root)
{
    int h=height(root);
    
    int sum=0;
    queue<pair<TreeNode*,int>>q;
    q.push({root,1});
    
    while(!q.empty())
    {
        auto it=q.front();
        TreeNode* node=it.first;
        int level=it.second;
        q.pop();
        
        if(node->left==NULL && node->right==NULL && level==h)
        {
            sum+=node->val;
        }
        
        if(node->left!=NULL)
        {
            q.push({node->left,level+1});
        }
        
        if(node->right!=NULL)
        {
            q.push({node->right,level+1});
        }
        
        
    }
    
    return sum;
}
    int deepestLeavesSum(TreeNode* root) {
    
        
        int sum=levelorder(root);
        
        return sum;
    }
};