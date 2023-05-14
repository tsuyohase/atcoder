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
int a[MAX_N];
int m[MAX_N];
int K;
const int MAX_K = 100000;
bool dp[MAX_N + 1][MAX_K + 1];

void solve(){
  dp[0][0] = true;
  for (int i = 0; i < n; i ++){
    for (int j = 0; j <= K; j++){
      for (int k = 0; k <= m[i] && k * a[i] <= j; k++){
        dp[i + 1][j] |= dp[i][j - k*a[i]];
      }
    }
  }
  return ;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  for (int i = 0; i < n; i++){
    cin >> m[i];
  }
  cin >> K;

  int ans = 0;

  solve();

  cout << ans << endl;
  return 0;
}