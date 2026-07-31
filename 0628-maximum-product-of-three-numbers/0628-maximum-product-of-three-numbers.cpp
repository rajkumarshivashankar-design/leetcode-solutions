class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;int prod=1;int n=nums.size();
        for(int i=n-1;i>=0;i--){
          if(count==3) break;
          prod=prod*nums[i];
          count++;
        }
        int ans=nums[0]*nums[1]*nums[n-1];
        
        return max(ans,prod);
    }
};