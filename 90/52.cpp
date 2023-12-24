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
  long long N;
  cin >> N;
  vector<long long> A(N);
  for (long long i = 0; i < N; i++){
    for (long long j = 0; j < 6; j++){
      long long tmp = 0;
      cin >> tmp;
      A[i] += tmp;
    }
    A[i] %= 1000000007;
  }


  long long ans = 1;
  for (long long i = 0;  i < N; i++){
    ans *= A[i];
    ans %= 1000000007;
  }

  cout << ans << endl;
  return 0;
}