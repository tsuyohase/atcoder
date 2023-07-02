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

long long A, B, C;


int main() {
  cin >> A >> B >> C;
  long long tmp = gcd(A, B);
  long long g = gcd(tmp, C);

  long long ans = A / g + B / g + C / g - 3;



  cout << ans << endl;
  return 0;
}