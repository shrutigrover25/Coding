/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
void pre(Node* root, vector<int>&ans)
{
    
    ans.push_back(root->val);
    
    for(int it=0;it<root->children.size();it++)
    {
        pre(root->children[it],ans);
    }
}
   
vector<int> preorder(Node* root) {
        
        
            
        vector<int>ans;
        
        if(root==NULL)
        {
            return ans;
        }
        
        pre(root,ans);
        
    return ans;
    }
};