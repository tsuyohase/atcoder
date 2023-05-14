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

int N;
const int MAX_N = 20;
int L[MAX_N];

int solve(){
  ll ans = 0;

  while (N > 1){
    int mii1 = 0, mii2 = 1;
    if (L[mii1] > L[mii2]) swap(mii1, mii2);
    for (int i = 2; i < N; i++){
      if (L[i] < L[mii1]){
        mii2 = mii1;
        mii1 = i;
      }
      else if (L[i] < L[mii2]){
        mii2 = i;
      }
    }
    int t = L[mii1] + L[mii2];
    ans += t;

    if(mii1 == N -1) swap(mii1, mii2);
    L[mii1] = t;
    L[mii2] = L[N-1];
    N--;
  }
  return 0;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> L[i];
  }

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}