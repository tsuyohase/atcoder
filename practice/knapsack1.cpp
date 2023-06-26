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

int N, W;
const int MAX_N = 100, MAX_W = 10000;
int w[MAX_N], v[MAX_N];
int dp[MAX_N + 1][MAX_W + 1];


int main() {
  cin >> N >> W;
  for (int i = 0; i < N; i++){
    cin >> w[i] >> v[i];
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < W; j++){
      if(j < w[i]){
        dp[i + 1][j] = dp[i][j];
      }else{
        dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
      }
    }
  }

  int ans = dp[N][W];

  cout << ans << endl;
  return 0;
}