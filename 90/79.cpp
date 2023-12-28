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
  long long H, W;
  cin >> H >> W;
  vector<vector<long long>> A(H, vector<long long>(W));
  for (long long i = 0; i < H; i++){
    for (long long j = 0;  j < W; j++){
      cin >> A[i][j];
    }
  }
  for (long long i = 0;  i < H; i++){
    for (long long j = 0; j < W; j++){
      long long tmp;
      cin >> tmp;
      A[i][j] -= tmp;
    }
  }
  long long ans = 0;
  bool flag = true;
  for (long long i = 0; i < H-1; i++){
    for (long long j = 0;  j < W-1; j++){
      long long tmp = A[i][j];
      A[i][j] -= tmp;
      A[i+1][j] -= tmp;
      A[i][j+1] -= tmp;
      A[i+1][j+1] -= tmp;
      ans += abs(tmp);
    }
  }
  for (long long i = 0; i < H; i++){
    for(long long j = 0; j < W; j++){
      if(A[i][j] != 0) flag = false;
    }
  }
  if(flag) cout << "Yes" << endl << ans << endl;
  else cout << "No" << endl;

  return 0;
}