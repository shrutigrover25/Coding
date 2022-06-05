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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double>v;
        queue<TreeNode*>q;
        q.push(root);
        
        if(!root)
            return v;
        
        while(!q.empty())
        {
            double sum=0;
            double count=0;
            queue<TreeNode*>temp;
            
            while(!q.empty())
            {
                TreeNode* n=q.front();
                q.pop();
                
                count++;
                sum+=n->val;
                
                if(n->left!=NULL)
                {
                    temp.push(n->left);
                }
                
                if(n->right!=NULL)
                {
                    temp.push(n->right);
                }
            }
            
            q=temp;
            double avg=sum/count;
            v.push_back(avg);
        }
        
        return v;
    }
};