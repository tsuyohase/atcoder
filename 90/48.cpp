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

int main() {
  long long N, K;
  cin >> N >> K;
  vector<long long> A(N), B(N);
  for (long long i = 0; i < N; i++){
    cin >> A[i] >> B[i];
  }
  for (long long i = 0; i < N; i++){
    B.push_back(A[i] - B[i]);
  }
  sort(B.begin(), B.end(), greater<long long>());
  long long ans = 0;
  for (int i = 0; i < K; i++){
    ans += B[i];
  }
  



  // long long dp[N + 1][K + 1];
  // for (long long i = 0; i < N; i++){
  //   for (long long j = 0; j < K + 1; j++){
  //     dp[i][j] = 0;
  //   }
  // }
  // for (long long i = 0; i < N; i++){
  //   for (long long j = 0; j < K + 1; j++){
  //     if (j == 0){
  //       dp[i + 1][j] = 0;
  //     }else if (j == 1){
  //       dp[i + 1][j] = max(dp[i][j], dp[i][j-1] + B[i]);
  //     }else {
  //       dp[i + 1][j] = max(dp[i][j],max(dp[i][j-1] + B[i], dp[i][j-2] + A[i]));
  //     }
  //   }
  // }
  // long long ans = 0;
  // for (long long i = 0; i < K + 1; i++){
  //   ans = max(ans, dp[N][i]);
  // }

  cout << ans << endl;
  return 0;
}