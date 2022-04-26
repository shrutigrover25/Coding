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
    


void inorder(TreeNode* root,vector<int>&v)
{
    if(root==NULL)
    {
        return;
    }
    
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
    
    
    
}
    vector<int> findMode(TreeNode* root) {
        
        map<int,int>mp;
        vector<int>v;
        inorder(root,v);
        int maxii=0;
        vector<int>ans;
        
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
        }
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>maxii)
            {
                maxii=it->second;
            }
        }
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==maxii)
            {
                ans.push_back(it->first);
            }
        }
        
        return ans;
    }
};