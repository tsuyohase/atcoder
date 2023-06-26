#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (long long i = 0; i < (long long)(n); i++)
#define rep1(i, n) for (long long i = 1; i < (long long)(n+1); i++)
using ll = long long;
using P = pair<long long,long long>;
using Graph = vector<vector<long long>>;

long long N;
const long long k = 998244353;
const long long MAX_N = 20000;
long long A[MAX_N], B[MAX_N];
long long dp[MAX_N + 1][2];

long long solve(){
  return 0;
}
int main() {
  cin >> N;
  for (long long i = 0; i < N; i++){
    cin >> A[i] >> B[i];
  }

  long long ans = 0;
  dp[0][0] = 1;
  dp[0][1] = 1;

  for (long long i = 0; i < N-1; i ++){
    for (long long j = 0; j < 2; j++){
      if(j == 0){
        if(A[i + 1] != A[i]){
          dp[i+1][j] +=dp[i][0];
          dp[i+1][j] %= k;
        }
        if(A[i + 1] != B[i]){
          dp[i+1][j] += dp[i][1];
          dp[i+1][j] %= k;

        }
      }else{
        if(B[i + 1] != A[i]){
          dp[i+1][j] +=dp[i][0];
          dp[i+1][j] %= k;

        }
        if(B[i + 1] != B[i]){
          dp[i+1][j] += dp[i][1];
          dp[i+1][j] %= k;

        }
      }
    }
  }

  // for(long long i = 0; i < N + 1; i++){
  //   for (long long j = 0; j < 2; j++){
  //     cout << dp[i][j];
  //   }
  //   cout << endl;
  // }

  ans = dp[N-1][0] + dp[N-1][1];
  ans = ans % k;

  cout << ans << endl;
  return 0;
}