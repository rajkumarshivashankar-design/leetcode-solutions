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
        if(root==NULL)return ans;
        queue <TreeNode*> q;
        q.push(root);int count=0;
        while(!q.empty()){
            int level=q.size();
            vector<int>currentLevel;
            for(int i=0;i<level;i++){
                TreeNode *node=q.front();
                q.pop();
                currentLevel.push_back(node->val);
                  if(node->left)q.push(node->left);
                  if(node->right)q.push(node->right);
                 
                
            }if(count%2!=0)
                         reverse(currentLevel.begin(),currentLevel.end());
                 count++;
            ans.push_back(currentLevel);
        }return ans;
    }
};