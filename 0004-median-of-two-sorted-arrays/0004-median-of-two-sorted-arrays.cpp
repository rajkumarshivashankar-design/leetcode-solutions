class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }sort(nums1.begin(),nums1.end());
        int low=0;
        int high=nums1.size()-1;double mid=0;
        if(nums1.size()%2!=0){
            //odd
             mid=low+(high-low)/2;
            return nums1[mid];
        }
        else{
             mid=low+(high-low)/2;
             int first=mid;
             int second=mid+1;
             return (double)(nums1[first]+nums1[second])/2;
        }
        return 0;
    }
};