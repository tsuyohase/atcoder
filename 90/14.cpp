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
  int N;
  cin >> N;
  vector<long long> A(N), B(N);
  for (int i = 0; i < N; i++){
    cin >> A[i];
  }
  for (int j = 0;  j < N;  j++){
    cin >> B[j];
  }

  long long ans = 0;

  // solve
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  for (int k = 0; k < N; k++){
    ans += abs(A[k] - B[k]);
  }


  cout << ans << endl;
  return 0;
}
