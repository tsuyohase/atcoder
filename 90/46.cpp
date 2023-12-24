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
  vector<long long> A(N), B(N), C(N);
  for (long long i = 0; i < N; i++){
    cin >> A[i];
  }
  for (long long i = 0; i < N; i++){
    cin >> B[i];
  }
  for (long long i = 0; i < N; i++){
    cin >> C[i];
  }
  int LOVE = 46;
  vector<long long> countA(LOVE), countB(LOVE), countC(LOVE);
  for (long long i = 0; i < N; i++){
    countA[A[i]%LOVE]++;
    countB[B[i]%LOVE]++;
    countC[C[i]%LOVE]++;
  }
  long long ans = 0;
  for (int i = 0; i < LOVE; i++){
    for (int j = 0; j < LOVE; j++){
      for (int k = 0; k < LOVE; k++){
        if ((i+j+k)%LOVE == 0){
          ans += countA[i]*countB[j]*countC[k];
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}