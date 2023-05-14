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

void solve(){
  for ( int i = 0; i < n; i++){
    for (int j = 0; j <= W; j ++){
      if (j < w[i]){
        dp[i + 1][j] = dp[i][j];
      }else{
        dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
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