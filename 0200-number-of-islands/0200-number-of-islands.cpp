class Solution {
public:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid, int n, int m) {
        queue<pair<int,int>> q;
        q.push({row, col});
        vis[row][col] = 1;
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        while(!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int k = 0; k < 4; k++) {
                int nrow = r + delrow[k];
                int ncol = c + delcol[k];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                   !vis[nrow][ncol] && grid[nrow][ncol] == '1') {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!vis[i][j] && grid[i][j] == '1') {
                    count++;
                    bfs(i, j, vis, grid, n, m);
                }
            }
        }
        return count;
    }
};