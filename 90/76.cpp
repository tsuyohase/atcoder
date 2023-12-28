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
  vector<long long> A(N);
  vector<long long> sum(N);
  double target = 0;
  for (long long i = 0; i < N; i++){
    cin >> A[i];
    target += A[i];
    sum[i] = target;
  }
  for (long long i = 0; i < N; i++){
    sum.push_back(A[i] + target);
    target += A[i];
  }
  target /= 20;
  bool flag = false;
  for (long long i = 0; i < N; i++){
    auto it = lower_bound(sum.begin(), sum.end(), target + sum[i]);
    if (*it == target + sum[i]){
      flag = true;
      break;
    }
  }
  if (flag) cout << "Yes" << endl;
  else cout << "No" << endl;



  return 0;
}