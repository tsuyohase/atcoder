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
const int MAX_W = 10000;
int dp[MAX_N + 1][MAX_W + 1];

void solve(int i, int j){
  for (int i = 0; i < n; i ++){
    for (int j = 0; j < n; j ++){
      for (int k = 0; k * w[i] <= j; k++){
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - k * w[i]] + k * v[i]);
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

  solve(0,W);

  cout << dp[n][W] << endl;
  return 0;
}