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
  long long a, b, c;
  cin >> a >> b >> c;
  // solve
  long long tmp = 1;
  for (long long i = 0;  i < b; i++){
    tmp *= c;
  }
  string ans;
  if (a < tmp) ans = "Yes";
  else ans = "No";

  cout << ans << endl;
  return 0;
}