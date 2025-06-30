#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int temp;
  int minimum = INT_MAX;
  for (int i = 1; i <= n; i++) {
    cin >> temp;
    temp = abs(temp);
    minimum = min(temp, minimum);
  }
  cout << minimum << endl;
}

int main() {
  solve();
  return 0;
}
