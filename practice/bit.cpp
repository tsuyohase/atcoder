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


int allSubSet() {
  int n;
  int a[20];
  int K;
  cin >> n;
  cin >> K;
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  bool exist = false;
  for(int bit = 0; bit <(1 << n); bit++){
    int sum = 0;
    for (int i = 0; i < n; i++){
      if (bit & (1 << i)) sum += a[i];
    }
    if (sum == K) {
      exist = true;
      break;
    }
  }
}

int subSet() {
  int n = 10;
  int A = (1 << 2) | (1 << 3) | (1 << 5) | (1 << 7);

  for(int bit = A; ; bit = (bit-1) & A){
    vector<int> S;
    for (int i = 0; i < n; i++){
      if(bit &(1 << i)){
        S.push_back(i);
      }
    }
    if(!bit) break;
  }
}

int next_combination(int sub) {
  int x = sub & -sub, y = sub + x;
  return(((sub & ~y) / x) >> 1) | y;
}

int useNC(){
  int n = 5;
  int k = 3;

  int bit = (1<<k)-1;
  for(;bit< (1<<n); bit = next_combination(bit)){
    vector<int> S;
    for (int i = 0; i < n; i++){
      if(bit & (1 << i)) {
        S.push_back(i);
      }
    }
  }
}

