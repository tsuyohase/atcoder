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

int N, T;
const int MAX_N = 25000, MAX_T = 10000;
P p[MAX_N];

int main() {
  cin >> N >> T;
  for(int i=0; i<N; i++) {
        int l, r;
        cin >> l >> r;
        p[i] = make_pair(l, r);
  }
  int ans =0;
  int index = 0;
  sort(begin(p), end(p));
  int s = 1;
  int e =0;
  while(p[index].first == 1){
    e = max(e, p[index].second);
    index++;
  }
  ans++;

  cout <<e;



  while(e < T){
    int m = 0;
    while(p[index].first < e){
      m = max(m,p[index].second);
      index++;
    }
    if(m == 0){
      return -1;
    }
    e = m;
    ans++;
  }

  cout << ans << endl;
  return 0;
}