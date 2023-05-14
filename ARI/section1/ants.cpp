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
  int l;
  int n;
  cin >> l >> n;

  int a[n];
  for (int i =0; i<n; i++){
    cin >>a[i];
  }

  int maxT = 0;
  int minT = 0;

  for(int i = 0; i < n; i++){
    minT = max(minT, min(a[i], l - a[i]));
    maxT = max(maxT, max(a[i], l - a[i]));
  }

  cout << minT << endl << maxT << endl;
  return 0;
}