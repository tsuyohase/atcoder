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
  long long N;
  cin >> N;
  long long A, B, C;
  cin >> A >> B >> C;
  int ans = 10000;
  // solve
  for (int a_num = 0; a_num < 10000; a_num++){
    for (int b_num = 0; b_num < 10000-a_num; b_num++){
      int c_num = (N - a_num * A - b_num * B) / C;
      if((c_num >= 0) &&(a_num * A + b_num * B + c_num * C == N)){
        ans = min(ans, a_num + b_num + c_num);
      }
    }
  }

  cout << ans << endl;
  return 0;
}