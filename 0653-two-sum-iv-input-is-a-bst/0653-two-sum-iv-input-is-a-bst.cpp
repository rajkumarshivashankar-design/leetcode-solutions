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
    unordered_map<int,int>f;
    
    bool findTarget(TreeNode* root, int k) {
        if(root ==NULL ) return false;
        if( f.count(k-root->val)) {return true;} // checks if the value is present 
        f[root->val]++;
        bool ans1=findTarget(root->left,k);
        bool ans2=findTarget(root->right,k);
        return ans1 || ans2 ;
        
    }
};