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

long long count(long long n, long long L, long long memo[]){
  if(n == 0){
    return 1;
  }
  if(n < 0){
    return 0;
  }
  if(memo[n] != -1){
    return memo[n];
  }else{
    memo[n] = count(n-1, L, memo) + count(n-L, L, memo);
    return memo[n];
  }
}

int main() {
  long long N, L;
  cin >> N >> L;
  long long memo[N+1];
  for (int i = 0; i < N+1;i++){
    memo[i] = -1;
  }
  long long ans = count(N, L, memo);
  
  long long m = 1000000007;
  ans = ans % m;

  cout << ans << endl;
  return 0;
}