/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
TreeNode* ans=NULL;
    
void clonesss(TreeNode* original, TreeNode* cloned, TreeNode*target)
{
    
    
    
    if(original==NULL)
    {
        return;
    }
    
    if(original==target)
    {
        ans=cloned;
        return;
        
    }
    
    clonesss(original->left,cloned->left,target);
    clonesss(original->right,cloned->right,target);
    
    
}
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
      clonesss(original,cloned,target);
       return ans;
        
    }
};