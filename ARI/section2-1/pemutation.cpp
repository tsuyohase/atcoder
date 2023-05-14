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
bool used[MAX_N];
int perm[MAX_N];

int solve(){
  return 0;
}

void permutation1 (int pos, int n){
  if (pos == n){
    return;
  }

  for (int i = 0; i < n; i++){
    if (!used[i]) {
      perm[pos] = i;
      used[i] = true;
      permutation1(pos + 1, n);
      used[i] = false;
    }
  }
  return;
}

void permutation2(int n){
  for (int i = 0; i < n; i++){
    perm[i] = i;
  }
  do {} while (next_permutation(perm, perm + n));

}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> used[i];
  }

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}