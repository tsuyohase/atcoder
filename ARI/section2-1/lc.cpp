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
const int MAX_N = 100;
int M;
const int MAX_M = 100;
char field[MAX_N][MAX_M];

void dfs(int x, int y){
  field[x][y] = '.';

  for (int dx = -1; dx <= 1; dx++){
    for (int dy = -1; dy <= 1; dy++){
      int nx = x + dx, ny = y + dy;

      if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') dfs(nx, ny);
    }
  }
  return;
}

int solve(){
  int res = 0;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      if (field[i][j] == 'W') {
        dfs(i, j);
        res ++;
      }
    }
  }
  return res;
}

int main() {
  cin >> N;
  cin >> M;
  for (int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> field[i][j];
    }
  }

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}