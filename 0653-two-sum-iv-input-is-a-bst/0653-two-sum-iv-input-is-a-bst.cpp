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
    
void storenodes(TreeNode* root, vector<int>&v)
{
    if(root==NULL)
    {
        return;
    }
    
    storenodes(root->left,v);
    v.push_back(root->val);
    storenodes(root->right,v);
}
    bool findTarget(TreeNode* root, int k) {
        
        vector<int>v;
        
        storenodes(root, v);
            
        int l=0;
        int r=v.size()-1;
        
        while(l<r)
        {
            if(v[l]+v[r]==k)
            {
                return true;
            }
            
            else if(v[l]+v[r]>k)
            {
                r--;
            }
            
            else
            {
                l++;
            }
        }
            
        return false;
        
        
    }
};