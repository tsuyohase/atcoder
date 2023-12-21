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
  long long A, B;
  cin >> A >> B;
  long long largeNum = 1000000000000000000;

  long long tmp1 = max(A, B);
  long long tmp2 = min(A, B);
  while(tmp2 > 0){
    long long r = tmp1 % tmp2;
    tmp1 = tmp2;
    tmp2 = r;
  }
  long long gcd = tmp1;
  long long lcm = A / gcd;

  if (lcm > largeNum / B){
    cout << "Large" << endl;
  }else {
    cout << lcm * B << endl;
  }

  return 0;
}