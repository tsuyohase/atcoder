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
int R;
const int MAX_N = 1000;
int X[MAX_N];

int solve(){
  int ans = 0;

  int i = 0;
  while(i < N){
    int s = X[i++];
    while(i < N && X[i] <= s + R){
      i++;
    }
    int p = X[i - 1];
    while(i < N && X[i] <= p + R){
      i++;
    }
    ans++;
  }
  return ans;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> X[i];
  }

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}