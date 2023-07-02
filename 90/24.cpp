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

int N, K;
const int MAX_N = 1000;
int A[MAX_N], B[MAX_N];


int main() {
  cin >> N >> K;
  for (int i = 0; i < N; i++){
    cin >> A[i];
  }
  for (int i = 0; i < N; i++){
    cin >> B[i];
  }
  int dif = 0;
  for (int i = 0; i < N; i++){
    dif += abs(A[i] - B[i]);
  }
  if(dif > K){
    cout << "No" << endl;
  }else if(dif % 2 == K % 2){
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl; 
  }
  return 0;
}