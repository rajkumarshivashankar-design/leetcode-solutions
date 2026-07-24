class Solution {
public:
     void solution(int sum,vector<vector<int>> &res,vector <int> &temp,vector<int>& candidates,int n,int target,int idx){
        
        if(sum==target ){ res.push_back(temp);
            return;}
        if(idx==n)return;
        if(sum<=target){
            temp.push_back(candidates[idx]);
            sum+=candidates[idx];
            solution(sum,res,temp,candidates,n,target,idx+1);
            int removed=temp[temp.size()-1];
            sum-=removed;
            temp.pop_back();
        }
        while(idx+1<n && candidates[idx+1]==candidates[idx]) idx++; //skip duplicates
        solution(sum,res,temp,candidates,n,target,idx+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int sum=0;
        vector<vector<int>> res;
         vector<int> temp;
        int n=candidates.size();int idx=0;
        sort(candidates.begin(),candidates.end());
        solution(sum,res,temp,candidates,n,target,idx);

        return res;
    }
};