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

int R,C;
const int MAX_R = 10;
const int MAX_C = 10000;
int board[MAX_R +1][MAX_C + 1];
int inv[MAX_R + 1][MAX_C + 1];
int ans = 0;

int main() {
  cin >> R >> C;
  for (int i = 0; i < R; i++){
    for (int j = 0; j < C; j++){
      cin >> board[i][j];
    }
  }

  for(int bit = 0; bit < 1 <<R; bit++){
    vector<int> cnt(C);
    for(int i = 0; i < R; i++){
      for (int j = 0; j < C; j++){
        if(bit >> i & 2) cnt[j] += inv[i][j];
        else cnt[j] += board[i][j];
      }
    }

    int tmp = 0;
    for (int i = 0; i < C ; i++){
      tmp += max(cnt[i], R - cnt[i]);
    }
    ans = max(ans, tmp);
  }

  cout << ans << endl;
  return 0;
}