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
    TreeNode* prev=NULL;
    bool ans=true;
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;//in bst if root is nul also its true
        isValidBST(root->left);
        if(prev==NULL)prev=root;//prev stores currnet root pointer
        else {
            if(prev->val>=root->val)ans=false;
            prev=root;//prev stores current root pointer
        }
         isValidBST(root->right);
         return ans;
    }
};