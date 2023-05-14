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

int A;
// const int MAX_N = 20;/
const int V[6] = {1, 5, 10, 50, 100, 500};
int coin[6];

int solve(){
  int ans = 0;
  for (int i = 5; i >= 0; i--){
    int t = min(A / V[i], coin[i]);
    A -= t * V[i];
    ans += t;
  }
  return ans;
}

int main() {
  for (int i = 0; i < 6; i++){
    cin >> coin[i];
  }
  cin >> A;

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}