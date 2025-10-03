/*
 * @lc app=leetcode id=684 lang=cpp
 *
 * [684] Redundant Connection
 */

// @lc code=start
class Solution {
private:
    vector<int> rank, parent;

    int ultimate_parent(int node) {
        if (node == parent[node]) return node;
        return parent[node] = ultimate_parent(parent[node]);
    }

    void rank_union(int u, int v) {
        int up_u = ultimate_parent(u);
        int up_v = ultimate_parent(v);

        if (up_u == up_v) return;
        if (rank[up_u] < rank[up_v]) parent[up_u] = up_v;
        else if (rank[up_u] > rank[up_v]) parent[up_v] = up_u;
        else {
            parent[up_v] = up_u;
            rank[up_u]++;
        }
    }
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        rank.resize(n+1, 0);
        parent.resize(n+1);

        for (int i = 0; i <= n; i++) parent[i] = i;

        vector<int> ans;
        for (auto edge: edges) {
            int u = edge[0];
            int v = edge[1];

            if (ultimate_parent(u) == ultimate_parent(v)) ans = {u, v};
            else rank_union(u, v);
        }

        return ans;
    }
};
// @lc code=end

