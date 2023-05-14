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
int dp[MAX_K + 1];

void solve(){
  memset(dp, -1, sizeof(dp));
  dp[0] = 0;
  for (int i = 0; i < n; i ++){
    for (int j = 0; j <= K; j++){
      if (dp[j] >= 0){
        dp[j] = m[i];
      } else if (j < a[i] || dp[j - a[i]] <= 0){
        dp[j] = -1;
      }else {
        dp[j] = dp[j - a[i]] -1;
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