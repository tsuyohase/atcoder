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

int H, W, N;
const int MAX_N = 9;
P c[MAX_N +1];
const int MAX_HW = 100;
char board[MAX_HW][MAX_HW];
int ans;
int d[MAX_HW][MAX_HW];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
const int INF = 2 << 30;

int bfs(P s, P g){
  queue<P> que;
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      d[i][j] = INF;
    }
  }
  que.push(s);
  d[s.first][s.second] = 0;

  while (que.size()){
    P p = que.front(); que.pop();
    if (p.first == g.first && p.second == g.second) break;
    for (int k = 0; k < 4; k++) {
      int nx = p.first + dx[k], ny = p.second + dy[k];

      if (0 <= nx && nx < H && 0 <= ny && ny < W && board[nx][ny] != 'X' && d[nx][ny] == INF){
        que.push(P(nx, ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }  
  return d[g.first][g.second];
}

int main() {
  cin >> H >> W >> N;
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      cin >> board[i][j];
      if(board[i][j] == 'S'){
        c[0] = P(i,j);
      }
      if (board[i][j] != '.' && board[i][j] != 'X'){
        c[board[i][j] - '0'] =P(i, j);
      }
    }
  }

  ans = 0;
  for(int i = 0; i < N; i++){
    P s = c[i];
    P g = c[i + 1];
    ans += bfs(s, g);
  }

  cout << ans << endl;
  return 0;
}