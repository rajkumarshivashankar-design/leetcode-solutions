class Solution {
public:
    int helper(vector<int>& nums, int n,int i,int free,vector<vector<int>>& dp){
        if(i==n)return 0;
        if(dp[i][free]!=-1)return dp[i][free];
        if(free==0) return dp[i][free]=helper(nums,n,i+1,1,dp);
        int rob=nums[i]+helper(nums,n,i+1,0,dp);
        int skip=helper(nums,n,i+1,1,dp);
        return dp[i][free]=max(rob,skip);
    }
    int rob(vector<int>& nums) {
       int n=nums.size();
       vector<vector<int>>dp(n,vector<int>(2,-1));
       return helper(nums,n,0,1,dp);
    }
};