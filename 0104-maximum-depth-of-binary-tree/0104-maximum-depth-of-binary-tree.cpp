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
    int maxDepth(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        
        int level=0;
        
        if(root==NULL)
        {
            return level;
        }
        
        while(!q.empty())
        {
            level++;
            int size=q.size();
            
            while(size--)
            {
                TreeNode* p=q.front();
                q.pop();
                
                if(p->left!=NULL)
                {
                    q.push(p->left);
                }
                
                if(p->right!=NULL)
                {
                    q.push(p->right);
                }
            }  
            
        }
        
        return level;
        
    }
};