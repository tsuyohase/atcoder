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

int N, M;
const int MAX_N = 100000;
int a[MAX_N];
int b[MAX_N];

int main() {
  cin >> N >> M;
  for (int i = 0; i < M; i++){
    cin >> a[i] >> b[i];
  }

  int ans = 0;
  int tmp[MAX_N] = {0};
  for (int i = 0; i < M; i++){
    int bigger = max(a[i], b[i]);
    tmp[bigger - 1] ++;
  }

  for (int i = 0; i < N; i++){
    if (tmp[i] == 1) ans ++;
  }
  
  cout << ans << endl;
  return 0;
}