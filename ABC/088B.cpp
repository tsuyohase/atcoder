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
const int MAX_N = 100;
int a[MAX_N];

int solve(){
  return 0;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> a[i];
  }
  sort(a, a + N, greater<int>());
  int ans = 0;
  for(int i = 0; i < N; i++){
    if(i % 2 == 0){
      ans += a[i];
    }else {
      ans -= a[i];
    }
  }

  cout << ans << endl;
  return 0;
}