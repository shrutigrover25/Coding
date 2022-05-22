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
    void mark_parent(TreeNode *root, unordered_map<TreeNode*, TreeNode*>&parent){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode *t = q.front();
            q.pop();
            if(t->left){
                parent[t->left]=t;
                q.push(t->left);
            }
            if(t->right){
                parent[t->right]=t;
                q.push(t->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*>parent;
        mark_parent(root,parent);
        int curr_level =0;
        queue<TreeNode*>q;
        q.push(target);
        unordered_map<TreeNode*,bool>visited;
        visited[target]=true;
        while(!q.empty()){
            if(curr_level++==k)
                break;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode *t = q.front();
                q.pop();
                if(t->left && !visited[t->left]){
                    q.push(t->left);
                    visited[t->left]=true;
                }
                if(t->right && !visited[t->right]){
                    q.push(t->right);
                    visited[t->right]=true;
                }
                if(parent[t] && !visited[parent[t]]){
                    q.push(parent[t]);
                    visited[parent[t]]=true;
                }
            }
        }
        vector<int>ans;
        while(!q.empty()){
            TreeNode *t = q.front();
            q.pop();
            ans.push_back(t->val);
        }
        return ans;
    }
};