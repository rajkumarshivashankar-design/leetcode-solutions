class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>res (n,1e8);
         res[src]=0;
        for(int i=0;i<=k;i++){
            vector<int>temp=res;//temp stores only previos edges or k+1 edges
            for(int j=0;j<flights.size();j++){
                int s=flights[j][0];
                int d=flights[j][1];
                int wt=flights[j][2];
                if(res[s]!=1e8 && temp[d]>res[s]+wt){
                    temp[d]=res[s]+wt;
                }
                
            }
             res=temp;
        }
        return res[dst]==1e8?-1:res[dst];
    }
};