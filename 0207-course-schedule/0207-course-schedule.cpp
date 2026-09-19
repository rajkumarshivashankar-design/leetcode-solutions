class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }
          queue<int>q;
          vector<int>result;
          for(int i=0;i<numCourses;i++){
            if(indegree[i]==0)
                q.push(i);
            }
            while(!q.empty()){
                     int node=q.front();
                     q.pop();
                     result.push_back(node);
                     for(int j=0;j<adj[node].size();j++){
                        int neig=adj[node][j];
                        if(--indegree[neig]==0)q.push(neig);


                     }
            }
          

         return result.size()==numCourses; 
    }
};