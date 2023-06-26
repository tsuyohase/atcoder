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

int N;
const int MAX_N = 100000;
int a[MAX_N], b[MAX_N], c[MAX_N];

int dp[MAX_N + 1][3];


int main() {
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> a[i] >> b[i] >> c[i];
  }

  dp[0][0] = a[0];
  dp[0][1] = b[0];
  dp[0][2] = c[0];

  for(int i = 0; i < N; i++){
    dp[i + 1][0] = max(dp[i][1], dp[i][2]);
    dp[i + 1][1] = max(dp[i][0], dp[i][2]);
    dp[i + 1][2] = max(dp[i][0], dp[i][1]);
  }

  int ans = max(dp[N][0], dp[N][1], dp[N][2]);

  cout << ans << endl;
  return 0;
}