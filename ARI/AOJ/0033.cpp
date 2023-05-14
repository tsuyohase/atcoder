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
const int MAX_N = 10;
int a[MAX_N + 1];
int r, l;
bool ans = false;


void dfs(int n, int l, int r){
  if (n > 9) ans = true;
  if(a[n] > r && a[n] >l){
    dfs(n + 1,a[n], r);
    dfs(n + 1, l, a[n]);
  }else if (a[n] > r){
    dfs(n + 1, l, a[n]);
  }else if (a[n] > l) {
    dfs(n + 1, a[n], r);
  }
  return;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> a[i];
  }

  dfs(0, 0, 0);

  cout << ans << endl;
  return 0;
}