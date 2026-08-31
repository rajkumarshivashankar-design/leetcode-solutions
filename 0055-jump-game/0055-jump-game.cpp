class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;int reach=0;
        while(i<nums.size()){
            if(i>reach )return false;
            reach=max(reach,i+nums[i]);
            i++;
        }return true;
    }
};