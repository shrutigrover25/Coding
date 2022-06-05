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
    
vector<int>v;
    
vector<int> inorder(TreeNode* root)
{
    
    if(root==NULL)
    {
        return v;
    }

    inorder(root->left);
    v.push_back(root->val);
    inorder(root->right);
    
    return v;
}
    int findSecondMinimumValue(TreeNode* root) {
        
        inorder(root);
        sort(v.begin(),v.end());
        
        int res=0;
        
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
            {
                res=i+1;
                break;
                
            }
        }
        
        if(res==0)
        {
            return -1;
        }
        
        return v[res];
        
    }
};