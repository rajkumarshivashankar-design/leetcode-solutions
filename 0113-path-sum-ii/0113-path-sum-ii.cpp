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
     vector<vector<int>> helper(TreeNode* root,int targetSum,int sum,vector<int>& ans,vector<vector<int>>& res){
     if(root==NULL)return {};
     sum+=root->val;
     ans.push_back(root->val);
     //for leaf node both left and right are null
     if((root->left==NULL && root->right==NULL) && sum==targetSum){
        res.push_back(ans);
     }
     helper(root->left,targetSum,sum,ans,res);
     helper(root->right,targetSum,sum,ans,res);
     sum-=root->val;
     ans.pop_back();
     return res;
     }
  
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>ans;
        vector<vector<int>>res;
        int sum=0;
       return  helper(root,targetSum,sum,ans,res);
    }
};