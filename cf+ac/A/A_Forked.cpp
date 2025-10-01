#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int a, b;
  cin >> a >> b;

  int x_k, y_k;
  cin >> x_k >> y_k;

  int x_q, y_q;
  cin >> x_q >> y_q;

  vector<pair<int, int>> dirs = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

  set<pair<int, int>> ans_k, ans_q;
  for (auto d: dirs) {
    int x = x_k + d.first;
    int y = y_k + d.second;
    ans_k.insert(make_pair(x, y));

    x = x_q + d.first;
    y = y_q + d.second;
    ans_q.insert(make_pair(x, y));
  }

  // for (auto it: ans_k) cout << it[0] << "," << it[1] << endl;
  // for (auto it: ans_q) cout << it[0] << "," << it[1] << endl;

  int count = 0;
  for (auto it : ans_k)
  {
    if (ans_q.find(it) != ans_q.end())
      count++;
  }

  cout << count << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t-- > 0)
  {
    solve();
  }
  return 0;
}
