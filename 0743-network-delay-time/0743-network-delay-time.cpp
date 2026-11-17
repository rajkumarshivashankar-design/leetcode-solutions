class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n);
        k--;// convert to zero based indexing( k is the source)
        for(int i=0;i<times.size();i++){
            int u=times[i][0]-1;//0 based indexing
            int v=times[i][1]-1;
            int w=times[i][2];
            adj[u].push_back({v,w});
        }
        vector<int> dist(n,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        dist[k]=0;
        pq.push({0,k});
        while(!pq.empty()){
            auto p=pq.top();pq.pop();
            int d=p.first;
            int curr=p.second;

            if(d>dist[curr])continue;
            for(int j=0;j<adj[curr].size();j++){
                int neigh=adj[curr][j].first;
                int wt=adj[curr][j].second;
                
                if(d+wt<dist[neigh]){
                    dist[neigh]=d+wt;
                    pq.push({dist[neigh],neigh});
                }
            }
        }
        int maxTime=0;
        for(int i=0;i<n;i++){
            if(dist[i]==INT_MAX)return -1;
            maxTime=max(maxTime,dist[i]);
        }
        return maxTime;
    }
};