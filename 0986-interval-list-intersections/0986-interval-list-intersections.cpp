class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
    vector<vector<int>>res;
    int n=firstList.size();int m=secondList.size();
    if(n==0 || m==0)return {};
   
    int i=0,j=0;
       while(i<n && j<m){
        int first1=firstList[i][0];
    int end1=firstList[i][1];
    int first2=secondList[j][0];
    int end2=secondList[j][1];
        int x=max(first1,first2);
        int y=min(end1,end2);
        if(x<=y){//edge case if first is more than end dont push
        res.push_back({x,y});
        }
        if(end1>end2)j++;
        else i++;
       }return res;
    }
};