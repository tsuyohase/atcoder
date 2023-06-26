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
int A, B;

int solve(){
  return 0;
}

int main() {
  cin >> N;
  cin >> A;
  cin >> B;
  int ans = 0;

  for (int i = 1; i < N + 1; i++){
    int sum = 0;
    while(N > 0){
      sum += N % 10;
      N = N % 10;
    }
    if(A <= sum && sum <= B) ans += i;
  }

  cout << ans << endl;
  return 0;
}

int binary() {
  cin >> N;
  cin >> A;
  cin >> B;
  int ans = 0;
  for (int i = 1; i < N + 1; i++){
    int sum = __builtin_popcount(i);
    if(A <= sum && sum <= B) ans += i;
  }
}