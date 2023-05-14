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
int m;
const int MAX_N = 1000;
const int MAX_M = 1000;
char s[MAX_N];
char t[MAX_M];

int dp[MAX_N + 1][MAX_M +1];

void solve(){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (s[i] == t[j]){
        dp[i + 1][j + 1] = dp[i][j] + 1;
      }else {
        dp[i + 1][j + 1] = max(dp[i][j +1], dp[i +1][j]);
      }
    }
  }
}

int main() {
  cin >> n;
  cin >> m;
  cin >> s;
  cin >> t;

  solve();

  cout << dp[n][m] << endl;
  return 0;
}