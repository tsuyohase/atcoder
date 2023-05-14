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

bool binary_search(int x, int n, int k[]){
   int l = 0, r =n;

  while (r - l >= 1){
    int i = (l + r) / 2;
    if (k[i] == x){
      return true;
    }else if (k[i] < x){
      l = i + 1;
    }else r = i; 
  }
  return false;
}

void main() {
  int n;
  int m;
  cin >> n >> m;

  int k[n];
  for (int i = 0; i < n; i++){
    cin >> k[i];
  }

  int kk[n * n];

  sort(k, k + n);

  bool f = false;
  for (int a = 0; a < n; a++){
    for (int b = 0; b < n; b++){
      if (binary_search(m - k[a] - k[b], n, kk)){
        f = true;
      }
    }
  }

  cout << f << endl;
}



