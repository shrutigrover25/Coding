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
    
    int a=0;
    
    TreeNode* buildtree(vector<int>& preorder, vector<int>& postorder, int start, int end, map<int,int>&mp)
    {
        if(start>end)
            return NULL;
        
        TreeNode* root=new TreeNode(preorder[a]);
        a++;
        
        if(a==preorder.size() || mp[preorder[a]]>=end)
            return root;
        
        int index=mp[preorder[a]];
        
        root->left=buildtree(preorder,postorder,start,index,mp);
        root->right=buildtree(preorder,postorder,index+1,end-1,mp);
        
        return root;
    }
    
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        a=0;
        map<int,int>mp;
        for(int i=0;i<preorder.size();i++)
        {
            mp[postorder[i]]=i;
        }
        
        return buildtree(preorder,postorder,0,preorder.size()-1,mp);
    }
};