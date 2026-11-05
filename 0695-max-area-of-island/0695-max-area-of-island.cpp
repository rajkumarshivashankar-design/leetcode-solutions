class Solution {
public:
bool isvalid(int r,int c,int n,int m){
    if(r<0 || r>=n || c<0 || c>=m)return false;
    return true;
}
int bfs(int r,int c,int n,int m,vector<vector<int>>& grid,vector<vector<int>>& visited,int dx[] ,int dy[]){
      visited[r][c]=1;int count=1;
      for(int k=0;k<4;k++){
        int nr=r+dx[k];
        int nc=c+dy[k];
        
        if(isvalid(nr,nc,n,m) && grid[nr][nc]==1 && !visited[nr][nc]){
            
           count+= bfs(nr,nc,n,m,grid,visited,dx,dy);
        }
      }return count;
}

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        int maxcount=0;
        for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    int cnt=bfs(i,j,n,m,grid,visited,dx,dy);
                   maxcount=max(maxcount,cnt);
                }
             }
        }return maxcount;
    }
};