class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestending=nums[0];
        int result=nums[0];
        for(int i=1;i<nums.size();i++){
            bestending=max(bestending+nums[i],nums[i]);
            result=max(bestending,result);
        }return result;
    }
};