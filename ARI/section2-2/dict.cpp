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
const int MAX_N = 2000;
int S[MAX_N];

int solve(){
  int a = 0, b = N-1;

  while(a <= b){
    bool left = false;
    for (int i = 0; a + i <= b; i++){
      if(S[a + i] < S[b -i]){
        left = true;
        break;
      }
      else if (S[a + i] > S[b -i]) {
        left = false;
        break;
      }
    }

    if (left) putchar(S[a++]);
    else putchar(S[b--]);
  }
  return 0;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> S[i];
  }

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}