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

int n;
const int MAX_N = 20;
int a[MAX_N];
int k;

bool solve(int i, int sum){
  if (i == n) return sum == k;

  if (solve(i + 1, sum)) return true;

  if (solve(i + 1, sum + a[i])) return true;

  return false;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  cin >> k;

  bool ans = solve(0, 0);

  cout << ans << endl;
  return 0;
}
