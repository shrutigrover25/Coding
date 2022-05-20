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
    
void findans(TreeNode* root, vector<string>&ans, string s)
{
    if(root==NULL)
    {
        return;
    }
    
    if(root->left==NULL && root->right==NULL)
    {
        s+=to_string(root->val);
        ans.push_back(s);
    }
    
    else
    {
    s+=to_string(root->val)+"->";
    }
    
    findans(root->left,ans,s);
    findans(root->right,ans,s);
}
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string>ans;
        string s="";
        findans(root,ans,s);
        return ans;
    }
};