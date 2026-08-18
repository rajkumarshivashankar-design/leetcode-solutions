class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int TotalSum=0;int left=0;
        for(int i=0;i<nums.size();i++){
            TotalSum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(i==0)left=0;
            else left+=nums[i-1];
            int right=TotalSum-left-nums[i];
            if(left==right)return i;
        }return -1;
    }
};