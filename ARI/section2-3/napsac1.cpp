#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int n;
const int MAX_N = 100;
int w[MAX_N];
int v[MAX_N];
int W;

int solve(int i, int j){
  int res;
  if (i == n) {
    res = 0;
  }else if (j < w[i]) {
    res = solve(i +1, j);
  }else {
    res = max(solve(i + 1, j), solve(i + 1, j - w[i]) + v[i]);
  }
  return res;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> w[i];
    cin >> v[i];
  }
  cin >> W;

  int ans = 0;

  ans = solve(0,W);

  cout << ans << endl;
  return 0;
}