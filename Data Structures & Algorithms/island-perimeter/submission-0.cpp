class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;
        int sx = -1, sy = -1;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    sx = i;
                    sy = j;
                    break;
                }
            }
            if(sx != -1) break;
        }

        if(sx == -1) return 0;

        int dx[] = {-1,0,1,0};
        int dy[] = {0,1,0,-1};

        q.push({sx,sy});
        grid[sx][sy] = -1;

        int perimeter = 0;

        while(!q.empty()) {
            auto [x,y] = q.front();
            q.pop();

            for(int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 0 || nx >= n || ny < 0 || ny >= m) {
                    perimeter++;
                }
                else if(grid[nx][ny] == 0) {
                    perimeter++;
                }
                else if(grid[nx][ny] == 1) {
                    grid[nx][ny] = -1;
                    q.push({nx,ny});
                }
            }
        }

        return perimeter;
    }
};