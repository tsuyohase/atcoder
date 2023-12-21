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
  long long T;
  cin >> T;
  long long L, X, Y;
  cin >> L >> X >> Y;
  int Q;
  cin >> Q;
  for(int i = 0; i < Q; i++){
    double E;
    cin >> E;
    double y, z;
    y = -L/2.0 * sin(2*M_PI*E/T);
    z = L/2.0 - L/2.0 * cos(2*M_PI*E/T);
    double theta = atan2(z, sqrt(X*X + (Y-y)*(Y-y)));
    double ans = theta * 180/M_PI;
    cout << fixed << setprecision(12) << ans<<endl;
  }

  return 0;
}