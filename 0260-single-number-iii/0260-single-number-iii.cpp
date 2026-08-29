class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>res;
         unordered_map <int,int> f;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
        }
        for(auto i:f){
            if(i.second==1)res.push_back(i.first);
        }return res;
    }
};