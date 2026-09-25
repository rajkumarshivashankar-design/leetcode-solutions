class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //unordered set
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        
        int maxlen=0;
        for(int x:st){
            if(st.find(x-1)==st.end()){
                int curr=x;
                int longest=1;
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    longest++;
                }
                maxlen=max(maxlen,longest);
            }
        }
        return maxlen;
    }
};