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

int n, m;
const int MAX_N = 1000;
int a[MAX_N];
int M;


int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  cin >> M;

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}