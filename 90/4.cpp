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

int H, W;
const int MAX_H = 2000;
int A[MAX_H][MAX_H];


int main() {
  cin >> H >> W;
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
        cin >> A[i][j];
    }
  }
  int b_h[H] = {};
  int b_w[W] = {};

  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
        b_h[i] += A[i][j];
        b_w[j] += A[i][j];
    }
  }


  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
        cout << b_h[i] + b_w[j] - A[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}