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
  long long tmp = 0;
  for (long long i = 2; i < sqrt(N) + 1; i++){
    while(N%i==0){
      N /= i;
      tmp++;
    }
  }
  if (N != 1) tmp++;

  long long ans = 0;
  if (tmp == 1) ans = 0;
  else ans = log2(tmp -1) + 1;

  cout << ans << endl;
  return 0;
}