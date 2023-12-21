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
  long long N, Q;
  cin >> N >> Q;
  deque<long long> A;
  for (long long i = 0; i < N; i++){
    long long tmp;
    cin >> tmp;
    A.push_back(tmp);
  }
  for (int i = 0; i < Q; i++){
    int T, x, y;
    cin >> T >> x >> y;
    if (T == 1){
      swap(A[x-1], A[y-1]);
    }else if (T == 2){
      long long tmp = A.back();
      A.pop_back();
      A.push_front(tmp);
    }else if (T == 3){
      cout << A[x-1] << endl;
    }
  }

  return 0;
}