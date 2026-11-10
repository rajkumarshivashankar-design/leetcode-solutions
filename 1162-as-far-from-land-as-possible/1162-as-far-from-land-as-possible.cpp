class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size();
         int m=grid[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                    visited[i][j]=true;
                }
            }
        }int dist=-1;
        
        while(!q.empty()){
            int sz=q.size();
               dist+=1; 
            if(sz==n*m || sz==0){
                //all are ones or zero
                return -1;
            }
            while(sz--){
            auto [r,c]=q.front();
            q.pop();
            int dx[]={-1,1,0,0};
            int dy[]={0,0,-1,1};
            for(int k=0;k<4;k++){
                int nr=r+dx[k];
                int nc=c+dy[k];

                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==0 && !visited[nr][nc]){
                    visited[nr][nc]=true;
                    q.push({nr,nc});
                }
              
              }
          
           
            }  
        }return dist;
    }
};