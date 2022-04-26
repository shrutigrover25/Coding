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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode*>q;
        vector<int>v;
        vector<vector<int>>ans;
        
        if(root==NULL)
        {
            return ans;
        }
        
        q.push(root);
       
        
        while(!q.empty())
        {
            vector<int>v;
            int n=q.size();
            
            while(n--)
            {
            TreeNode*temp=q.front();
            v.push_back(temp->val);
            q.pop();
            
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
            }
            
             ans.push_back(v);
        }
       
        
        return ans;
    }
};