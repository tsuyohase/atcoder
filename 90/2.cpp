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

bool isValid(string S){
  int score = 0;
  for (char s: S) {
    if(s == '(') score++;
    else score--;
    if (score < 0) return false;
  }
  if (score == 0) return true;
  else return false;
}

int main() {
  cin >> N;
  for (int bit = 0; bit < (1 << N); bit++){
    string S = "";
    for (int i = N - 1; i >= 0; i--){
      if (!(bit & (1 << i))) S += "(";
      else S += ")";
    }
    if(isValid(S)) cout << S << endl;
  }

  

  return 0;
}
