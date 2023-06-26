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

int N, K, L;
const int MAX_N = 100000;
int A[MAX_N];

int solve(){
  return 0;
}

int main() {
  cin >> N >> L >> K;
  for (int i = 0; i < N; i++){
    cin >> A[i];
  }

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}