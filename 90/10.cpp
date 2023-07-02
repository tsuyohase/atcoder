#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
// using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int N,Q;
const int MAX_N = 100000;
int First[MAX_N], Second[MAX_N];


int main() {
  cin >> N;
  for (int i = 0; i < N; i++){
    int c, tmp;
    cin >> c >> tmp;
    if (i == 0){
      if(c == 1){
        First[i] = tmp;
        Second[i] = 0;
      }else{
        Second[i] = tmp;
        First[i] = 0;
      }
    } else {
      if (c == 1){
        First[i] = First[i -1] + tmp;
        Second[i] = Second[i -1];
      }else {
        First[i] = First[i -1];
        Second[i] = Second[i -1] + tmp;
      }
    }
  }

  cin >> Q;
  int L, R;

  int A[Q], B[Q]; 

  for (int j = 0; j < Q; j++){
    cin >> L >> R;
    if (L == 1){
      A[j] = First[R - 1];
      B[j] = Second[R - 1];
    }else{
      A[j] = First[R - 1] - First[L - 2];
      B[j] = Second[R - 1] - Second[L - 2];
    }
  }

  for (int j = 0;  j < Q; j++){
    cout << A[j] << " " << B[j] << endl;
  }
  return 0;
}