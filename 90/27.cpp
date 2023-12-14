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

int N;
const int MAX_N = 100000;

int main() {
  cin >> N;
  set<string> S;
  for (int i = 0; i < N; i++){
    string tmp;
    cin >> tmp;
    if (S.find(tmp) == S.end()){
      S.insert(tmp);
      cout << i + 1 << endl;
    }
  }
  return 0;
}