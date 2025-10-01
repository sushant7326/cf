/*
 * @lc app=leetcode id=417 lang=cpp
 *
 * [417] Pacific Atlantic Water Flow
 */

// @lc code=start
// class Solution {
// private:
//     int n, m;
//     vector<vector<bool>> at, pa;
//     vector<vector<int>> ans;

//     void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j) {
//         if (visited[i][j]) return;
//         visited[i][j] = true;

//         if (at[i][j] && pa[i][j]) ans.push_back(vector<int> {i, j});

//         if (i+1 < n && grid[i+1][j] >= grid[i][j]) dfs(grid, visited, i+1, j);
//         if (i-1 >= 0 && grid[i-1][j] >= grid[i][j]) dfs(grid, visited, i-1, j);
//         if (j+1 < m && grid[i][j+1] >= grid[i][j]) dfs(grid, visited, i, j+1);
//         if (j-1 >= 0 && grid[i][j-1] >= grid[i][j]) dfs(grid, visited, i, j-1);
//     }

// public:
//     vector<vector<int>> pacificAtlantic(vector<vector<int>>& grid) {
//         n = grid.size();
//         m = grid[0].size();

//         if (!n) return ans;

//         at = pa = vector<vector<bool>> (n, vector<bool>(m, false));

//         for (int i = 0; i < n; i++) dfs(grid, pa, i, 0), dfs(grid, at, i, m-1);
//         for (int i = 0; i < m; i++) dfs(grid, pa, 0, i), dfs(grid, at, n-1, i);

//         return ans;
//     }
// };

class Solution {
private:
    int n, m;
    vector<vector<int>> ans;
    vector<vector<bool>> at, pa;
    queue<pair<int, int>> q;

    void bfs (vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j) {
        q.push({i, j});
        while(!q.empty()) {
            tie(i, j) = q.front();
            q.pop();

            if (visited[i][j]) continue;
            visited[i][j] = true;

            if (at[i][j] && pa[i][j]) ans.push_back(vector<int>{i, j});

            if (i+1 < n && grid[i+1][j] >= grid[i][j]) q.push({i+1, j});
            if (i-1 >= 0 && grid[i-1][j] >= grid[i][j]) q.push({i-1, j});
            if (j+1 < m && grid[i][j+1] >= grid[i][j]) q.push({i, j+1});
            if (j-1 >= 0 && grid[i][j-1] >= grid[i][j]) q.push({i, j-1});
        }
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        if (!n) return ans;

        at = pa = vector<vector<bool>> (n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) bfs(grid, pa, i, 0), bfs(grid, at, i, m-1);
        for (int i = 0; i < m; i++) bfs(grid, pa, 0, i), bfs(grid, at, n-1, i);

        return ans;
    }
};
// @lc code=end

