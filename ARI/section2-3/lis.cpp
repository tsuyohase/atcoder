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
const int MAX_N = 20;
int a[MAX_N];
int dp[MAX_N];

void solve(){
  int res = 0;
  for (int i = 0; i < n; i++){
    dp[i] = 1;
    for (int j = 0; j < i ; j++) if (a[j] < a[i]){
      dp[i] =max(dp[i], dp[j] + 1);
    }
    res = max(res, dp[i]);
  }
  return ;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  int ans = 0;

  solve();

  cout << ans << endl;
  return 0;
}