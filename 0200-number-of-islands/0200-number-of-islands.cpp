class Solution {
public:
    void dfs(vector<vector<char>>& grid,int n,int m){
        int row=grid.size();
        int cols=grid[0].size();
        if(n>=row || n<0 || m>=cols || m<0 || grid[n][m]=='0') return;
        grid[n][m]='0';
        dfs(grid,n-1,m);
        dfs(grid,n+1,m);
        dfs(grid,n,m-1);
        dfs(grid,n,m+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1')count++;
                dfs(grid,i,j);
            }
        }
        return count;
    }
};