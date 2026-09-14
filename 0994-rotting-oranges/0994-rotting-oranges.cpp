class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)q.push({i,j});
                else if(grid[i][j]==1)fresh++;
            }
        }int time=0;
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        while(!q.empty() && fresh>0){
          time++;
          int size=q.size();
          while(size--){
              pair<int,int>p=q.front();
              q.pop();
              int r=p.first;
              int c=p.second;
              for(int k=0;k<4;k++){
                int nr=r+dx[k];
                int nc=c+dy[k];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1){
                  grid[nr][nc]=2;
                  fresh--;
                  q.push({nr,nc});
                }
              }
          }
        }
        if(fresh==0)return time;
         return -1;
    }
};