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

int N, Q;
const int MAX_N = 100;
int d[MAX_N];

int solve(){
  return 0;
}

int main() {
  cin >> N >> Q;
  for (int i = 0; i < N; i++){
    cin >> d[i];
  }

  // int num[110] = {0};
  // for (int i = 0; i < N; i++){
  //   num[d[i]]++;
  // }

  // int ans = 0;
  // for (int i = 1; i <= 100; i++) {
  //   if (num[i]){
  //     ans++;
  //   }
  // }

  set<int> values;
  for (int i = 0; i < N; i++){
    values.insert(d[i]);
  }

  int ans = values.size();

  cout << ans << endl;
  return 0;
}