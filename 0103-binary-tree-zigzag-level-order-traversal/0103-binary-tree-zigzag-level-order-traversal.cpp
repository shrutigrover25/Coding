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
        int flag=0;
        
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
                TreeNode* n=q.front();
                 q.pop();
                
                v.push_back(n->val);
                
                if(n->left!=NULL)
                {
                    q.push(n->left);
                }
                
                if(n->right!=NULL)
                {
                    q.push(n->right);
                }
                
                
            }
            
            flag=!flag;
            if(flag==0)
            {
                reverse(v.begin(),v.end());
            }
            
            ans.push_back(v);
        }
        return ans;
    }
};