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
int h[MAX_N];

int dp[MAX_N + 2];

int solve(){
  return 0;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> h[i];
  }

  dp[0] = 0;
  dp[1] = abs(h[0] - h[1]);

  for(int i = 1; i < N; i++){
    dp[i + 1] = max(dp[i] + abs(h[i + 1] - h[i]), dp[i - 1] + abs(h[i + 1] - h[i - 1]));
  }

  int ans = dp[N];

  cout << ans << endl;
  return 0;
}