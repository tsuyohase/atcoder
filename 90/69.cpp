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
  long long ans = 0;
  if (N >= K){
    ans = K;
    for (long long i = 1; i < K; i++){
      ans *= i;
      ans %= 1000000007;
    }
  }
  ans %= 1000000007;

  cout << ans << endl;
  return 0;
}