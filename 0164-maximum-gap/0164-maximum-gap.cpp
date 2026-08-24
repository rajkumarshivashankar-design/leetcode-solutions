class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if (n==0 || n==1) return 0;
        int maxdiff=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            int diff=abs(nums[i]-nums[i+1]);
            maxdiff=max(maxdiff,diff);

        }return maxdiff;
    }
};