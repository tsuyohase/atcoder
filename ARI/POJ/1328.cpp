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
using D = pair<double, double>;

int d, n;
const int MAX_N = 1000;
D k[MAX_N];

int main() {
  cin >> n >>d;
  for (int i = 0; i < n; i++){
    int s,t;
    cin >> s >> t;
    double tmp = sqrt(pow(d,2) - pow(t,2));
    k[i] = make_pair(s + tmp, s - tmp);
  }

  sort(begin(k), end(k));

  int ans = 0;
  double t = -10000000;

  for (int i = 0; i < n; i++){
    if (t < k[i].second) {
      ans++;
      t = k[i].first;
    }
  }


  cout << ans << endl;
  return 0;
}