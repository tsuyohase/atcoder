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
const int MAX_N = 100000;
int s[MAX_N];
int t[MAX_N];
pair<int, int> itv[MAX_N];

int solve(){
  for (int i = 0; i < n; i++){
    itv[i].first = t[i];
    itv[i].second = s[i];
  }
  sort(itv, itv + n);

  int ans = 0, temp = 0;

  for (int i = 0; i < n; i++){
    if (temp < itv[i].second){
      ans++;
      temp = itv[i].first;
    }
  }

  return ans;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> s[i];
  }
  for (int i = 0; i < n; i++){
    cin >> t[i];
  }

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}