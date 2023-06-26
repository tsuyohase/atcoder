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
const int MAX_N = 350;
int T[MAX_N +1][MAX_N +1];
int dp[MAX_N + 1][MAX_N + 1];

int solve(){
  return 0;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++){
    for(int k = 0; k < i + 1; k++){
      cin >> T[i][k];
    }
  }

  int ans = 0;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      dp[i + 1][j + 1] = max(dp[i][j], dp[i][j+1]) + T[i][j];
    }
  }
  for(int i =0; i < N; i++){
    ans = max(ans, dp[N][i + 1]);
  }

  

  cout << ans << endl;
  return 0;
}