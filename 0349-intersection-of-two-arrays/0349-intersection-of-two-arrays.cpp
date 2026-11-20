class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>n1,n2; //ordered set
        n1.insert(nums1.begin(),nums1.end());
        n2.insert(nums2.begin(),nums2.end());

        vector<int>res;
        for(int x:n1){ //u cant use normal for loop
            for(int y:n2){
                if(x==y)res.push_back(x);
            }
        }
        return res;
    }
};