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
    int helper(TreeNode* root,string ans,int &sum){
        if(root==NULL)return 0;
        ans+=to_string(root->val);
        if((root->left==NULL && root->right==NULL)){
            sum+=stoi(ans);
        }
        helper(root->left,ans,sum);
        helper(root->right,ans,sum);
        
        return sum;
    }
    int sumNumbers(TreeNode* root) {
        string ans="";int sum=0;
       return helper(root,ans,sum);
        

    }
};