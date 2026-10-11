class Solution {
public:

    int numberOfSubarrays(vector<int>& nums, int k) {
      return atmostK(nums,k)-atmostK(nums,k-1);
    }

      int atmostK(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0,odd=0,ans=0;
        for(int high=0;high<n;high++){
            if(nums[high]%2!=0)odd++;
           
            while(odd>k){
                if(nums[low]%2!=0)odd--;
                low++;
            }
            ans += high-low+1;
        }return ans;
    }
};