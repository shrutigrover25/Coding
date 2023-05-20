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
        
        vector<vector<int>>ans;
        
        if(root==NULL)
        {
            return ans;
        }
        
        
        queue<TreeNode*>q;
        
        q.push(root);
        
        while(!q.empty())
        {
            vector<int>v;
            int size=q.size();
            
            while(size--)
            {
            TreeNode* topii=q.front();
            q.pop();
            
            v.push_back(topii->val);
            
            if(topii->left!=NULL)
            {
                q.push(topii->left);
                
            }
            
            if(topii->right!=NULL)
            {
                q.push(topii->right);
            }
                
            }
            
            ans.push_back(v);
            
            
        }
        
        
        return ans; 
        
    }
};