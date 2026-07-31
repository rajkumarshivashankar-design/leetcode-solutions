class Solution {
public:
    int maxSum(vector<int>& nums) {int n=nums.size();
        unordered_map<int,int>f;
        if(n==1)return nums[0];
        for(int i=0;i<n;i++){
            f[nums[i]]++;
        }int sum=0;
        for(auto [key,value]:f){
            if(key>0){
              sum+=key;
            }
        }
        if(sum==0){ //all elements are negative
            sort(nums.begin(),nums.end());
            return nums[n-1];
        }
        return sum;
        
    }
};