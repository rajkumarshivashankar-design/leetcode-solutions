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
    bool solve(TreeNode* p,TreeNode* q){ //same logic of same tree used here
       if(p==NULL && q==NULL)return true;
        if(p==NULL || q==NULL)return false;
        if(p->val != q->val)return false;
        bool t1=solve(p->left,q->right); 
        bool t2= solve(p->right,q->left); 
        
        return t1 && t2;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return false;
        
        return solve(root->left,root->right);
    }
};