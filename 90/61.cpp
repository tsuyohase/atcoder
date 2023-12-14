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

int Q;
const int MAX_Q = 100000;
int x[MAX_Q], t[MAX_Q];
vector<int> up, down;

int main() {
  cin >> Q;
  for (int i = 0; i < Q; i++){
    cin >> t[i] >> x[i];

    
  }

  for (int i = 0; i < Q; i++){
    if (t[i] == 1) {
      up.push_back(x[i]);
    }else if (t[i] == 2){
      down.push_back(x[i]);
    }else {
      if (x[i] > up.size()){
        cout << down[x[i] - up.size() - 1] << endl;
      }else{
        cout << up[up.size() - x[i]] << endl;
      }
    }
  }
  return 0;
}