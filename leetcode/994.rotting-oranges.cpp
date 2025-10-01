/*
 * @lc app=leetcode id=994 lang=cpp
 *
 * [994] Rotting Oranges
 */

// @lc code=start
class Solution
{
private:
    void dfs(vector<vector<int>> &grid, int row, int col, int time)
    {
        int n = grid.size();
        int m = grid[0].size();

        if (row < 0 || row >= n || col < 0 || col >= m || grid[row][col] == 0 || (1 < grid[row][col] && grid[row][col] < time))
            return;

        grid[row][col] = time;
        dfs(grid, row + 1, col, time + 1);
        dfs(grid, row - 1, col, time + 1);
        dfs(grid, row, col + 1, time + 1);
        dfs(grid, row, col - 1, time + 1);
    }

public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        if (n == 0) return -1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) dfs(grid, i, j, 2);
            }
        }

        int minutes = 2;
        for (auto row: grid) {
            for (auto cell: row) {
                if (cell == 1) return -1;
                minutes = max(minutes, cell);
            }
        }

        return minutes-2;
    }
};
// @lc code=end
