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

const int INF = 1 << 30;

int solve(){
  return 0;
}

int main() {
  int T; cin >> T;
  cin.ignore();
  while(T--){
    string s;
    getline(cin, s);
    stringstream ss(s);

    int val;
    vector<int> vs;
    while(ss >> val) vs.push_back(val);
    sort(vs.begin(), vs.end());
  

    int N = vs.size(), len = N / 2, ans = INF;
    do  {
      int vl = 0, vr =0;
      if(len != 1 && vs[0] == 0) continue;
      if(N - len != 1 && vs[len] == 0) continue;

      for(int i = 0; i < len; i++){
        vl = vl * 10 + vs[i];
      }

      for(int i = 0; i < N-len; i++){
        vr = vr * 10 + vs[len + i];
      }

      ans = min(ans, abs(vl - vr));
    }while(next_permutation(vs.begin(), vs.end()));
    cout << ans << endl;
  }
  return 0;
}