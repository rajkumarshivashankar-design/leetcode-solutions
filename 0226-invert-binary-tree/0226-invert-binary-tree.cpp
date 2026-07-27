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
 
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return NULL;
        TreeNode* node=root;
        TreeNode* ans1=invertTree(root->right);
        TreeNode* ans2=invertTree(root->left);
         node->left=ans1;
         node->right=ans2;
        return node;
    }
};