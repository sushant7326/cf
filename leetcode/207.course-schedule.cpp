/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
 */

// @lc code=start
class Solution {
private:
    bool course(vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& visited1, int curr) {
        visited[curr] = true;
        visited1[curr] = true;

        for (int it: adj[curr]) {
            if (visited[it]) return false;
            else {
                if (!visited1[it]) {
                    bool res = course(adj, visited, visited1, it);
                    if (!res) return false;
                }
            }
        }

        visited[curr] = false;
        return true;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        vector<vector<int>> adj(numCourses);
        vector<bool> visited1(numCourses, false);
        vector<bool> visited(numCourses, false);

        for (int i = 0; i < n; i++) {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        for (int i = 0; i < numCourses; i++) {
            if (!visited1[i]) {
                if (!course(adj, visited, visited1, i)) return false;
            }
        }

        return true;
    }
};
// @lc code=end

