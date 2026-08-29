class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> f;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
        }
        for(auto i:f){
            if(i.second==1)return i.first;
        }return -1;
    }
};