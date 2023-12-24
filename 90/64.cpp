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
  vector<long long> difA(N -1);
  long long tmp1;
  long long dif = 0;
  for (long long i = 0; i < N; i++){
    long long tmp2;
    cin >> tmp2;
    if(i != 0){
      difA[i-1] = tmp2 - tmp1;
      dif += abs(tmp2 - tmp1);
    }
    tmp1 = tmp2;
  }
  for (long long i = 0; i < Q; i++){
    long long L, R, V;
    cin >> L >> R >> V;
    if ((L == 1) && (R == N)){
      cout << dif << endl;
    }else if (L == 1){
      long long tmp = difA[R-1];
      difA[R-1] -= V;
      dif = dif - abs(tmp) +  abs(difA[R-1]);
      cout << dif << endl;
    }else if (R == N){
      long long tmp = difA[L-2];
      difA[L-2] += V;
      dif = dif - abs(tmp) + abs(difA[L -2]);
      cout << dif << endl;
    }else{
      long long tmp1 = difA[L - 2];
      long long tmp2 = difA[R - 1];
      difA[L - 2] += V;
      difA[R - 1] -= V;
      dif = dif - abs(tmp1) - abs(tmp2) + abs(difA[L - 2]) + abs(difA[R - 1]);
      cout << dif << endl;
    }
  }

  return 0;
}