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

int N, K;
const int MAX_N = 10000;
int h[MAX_N];
int dp[MAX_N + 1];
const int INF = 2 << 30;

int solve(){
  return 0;
}

int main() {
  cin >> N >> K;
  for (int i = 0; i < N; i++){
    cin >> h[i];
  }

  for (int i = 0; i < N + 1; i++){
    dp[i] = INF;
  }

  dp[0] = 0;
  for(int i = 0; i < N; i++){
    for(int k = 0; k < K; k++){
      if(i + K < N){
        dp[i+K] = min(dp[i+K], dp[i] + abs(dp[i] - dp[i + K]));
      }
    }
  }

  int ans = dp[N];

  cout << ans << endl;
  return 0;
}