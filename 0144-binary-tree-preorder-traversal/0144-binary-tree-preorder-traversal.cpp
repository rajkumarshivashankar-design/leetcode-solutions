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
    vector<int> solution(TreeNode* root,vector<int> &res){
        if(root==NULL) return res;
        res.push_back(root->val);
        solution(root->left,res);
        solution(root->right,res);
        return res;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        solution(root,res);
        return res;
    }
};