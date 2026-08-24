class Solution {
public:
void dfs(int x,int y,vector<vector<char>>&grid,int n,int m){
    grid[x][y]='0';
    int dx[]={-1,1,0,0};
    int dy[]={0,0,1,-1};
    for(int k=0;k<4;k++){
        int nx=dx[k]+x;
        int ny=dy[k]+y;
        if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]=='1'){
            dfs(nx,ny,grid,n,m);
        }
       
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    c++;
                    dfs(i,j,grid,n,m);
                }
            }
        }
        return c;
    }
};
