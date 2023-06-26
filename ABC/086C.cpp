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
int t[MAX_N], x[MAX_N], y[MAX_N];
const int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
bool ans = false;
int maxT = 0;

// void dfs(int ct, int cx, int cy, int i){
//   if(i == N - 1){
//     if(ct == t[i] && cx == x[i] && cy == y[i]){
//       ans = true;
//     }
//   }
//   if(ct == t[i] && cx == x[i] && cy == y[i]){
//     for(int k = 0; k < 4; k++){
//       int nx = cx + dx[i], ny = cy + dy[i];
//       dfs(ct+1, nx, ny, i + 1);
//     }
//   }
//   return;
// }

int main() {
  cin >> N;
  t[0] = x[0] =y[0] = 0;
  for (int i = 0; i < N; i++){
    cin >> t[i + 1] >> x[i + 1] >> y[i + 1]; 
  }

  // dfs(0, 0, 0, 0);

  bool can = true;
  for (int i = 0; i < N; i++){
    int dt = t[i+1] -t[i];
    int dist = abs(x[i+1] - x[i]) + abs(y[i + 1] - y[i]);
    if (dt < dist) can = false;
    if (dist % 2 != dt % 2) can = false;
  }

  



  cout << ans << endl;
  return 0;
}