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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        
        if(root==NULL)
        {
            return ans;
        }
        
        int flag=0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            
            vector<int>v;
            int s=q.size();
            
            while(s--)
            {
                TreeNode* one=q.front();
                q.pop();
                
                v.push_back(one->val);
                
                if(one->left!=NULL)
                {
                    q.push(one->left);
                }
                
                if(one->right!=NULL)
                {
                    q.push(one->right);
                }
            }
            
            if(flag==1)
            {
                reverse(v.begin(),v.end());
            }
            
            flag=!flag;
            
            ans.push_back(v);
            
            
        }
        
        return ans;
        
    }
};