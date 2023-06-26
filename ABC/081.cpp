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


int solve(){
  return 0;
}

int main() {
  int ans = 0;
  string s;
  int nums[3];
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if (s[i] - '0' == 1){
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}