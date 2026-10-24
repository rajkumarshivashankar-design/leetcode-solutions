class Solution {
public:
    
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
       vector<int> pse=PSE(nums);
       vector<int> nse=NSE(nums);
       vector<int> pge=PGE(nums);
       vector<int> nge=NGE(nums);
       long long total=0;
       for(int i=0;i<n;i++){
        total-=1LL*(i-pse[i])*(nse[i]-i)*nums[i];//cal total minimum
        total+=1LL*(i-pge[i])*(nge[i]-i)*nums[i];//cal total maximum
   }return total;
    }
    vector<int> PSE(vector<int> &nums){
        stack<int>st;  int n=nums.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
        while(!st.empty() && nums[st.top()]>=nums[i])st.pop();
        res[i]=st.empty()?-1:st.top();
        st.push(i);
        }
        return res;
    }
     vector<int> NSE(vector<int> &nums){
        stack<int>st;  int n=nums.size();
        vector<int>res(n);
        for(int i=n-1;i>=0;i--){
        while(!st.empty() && nums[st.top()]>nums[i])st.pop();
        res[i]=st.empty()?n:st.top();
        st.push(i);
        }
        return res;
    }
     vector<int> PGE(vector<int> &nums){
        stack<int>st;  int n=nums.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
        while(!st.empty() && nums[st.top()]<nums[i])st.pop();
        res[i]=st.empty()?-1:st.top();
          st.push(i);
        }
        return res;
    }
     vector<int> NGE(vector<int> &nums){
        stack<int>st;  int n=nums.size();
        vector<int>res(n);
        for(int i=n-1;i>=0;i--){
        while(!st.empty() && nums[st.top()]<=nums[i])st.pop();
        res[i]=st.empty()?n:st.top();
        st.push(i);
        }
        return res;
    }
};