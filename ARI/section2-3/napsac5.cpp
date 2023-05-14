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
const int MAX_V = 10;
int dp[MAX_N + 1][MAX_V + 1];

void solve(){
  fill(dp[0], dp[0] + MAX_N * MAX_V + 1, 100000000);
  dp[0][0] = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j <= MAX_N * MAX_V; j++){
      if (j < v[i]) {
        dp[i + 1][j] = dp[i][j];
      }else {
        dp[i + 1][j] =min(dp[i][j], dp[i][j - w[i]] + w[i]);
      }
    }
  }
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> w[i];
    cin >> v[i];
  }
  cin >> W;

  int ans = 0;

  solve();

  cout << ans << endl;
  return 0;
}