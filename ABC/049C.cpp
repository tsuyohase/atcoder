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

string S;
const string words[4] = {"dream", "dreamer", "erase", "eraser"};

int solve(){
  return 0;
}

int main() {
  cin >> S;
  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++){
    reverse(words[i].begin(), words[i].end());
  }

  bool can = true;

  for (int i = 0; i < S.size();) {
    bool can2 = false;
    for (int j = 0; j < 4; j++){
      string d = words[j];
      if (S.substr(i, d.size()) == d){
        can2 = true;
        i += d.size();
      }
    }
    if(!can2) {
      can = false;
      break;
    }
  }

  return 0;
}