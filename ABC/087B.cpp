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

int a, b, c;
// const int MAX_N = 20;
// int a[MAX_N];

int solve(){
  return 0;
}

int main() {
  int X;
  int ans = 0;
  cin >> a >> b >> c;
  cin >> X;
  for(int x = 0; x <= a; x++){
    for (int y = 0; y <= b; y++){
      for(int z = 0; z <=p c; z++){
        if (50 * z ==X - 500 * x - 100 * y) ans++;
      }
    }
  }

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}