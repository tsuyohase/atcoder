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

int W, H, ans;
const int INF = 1 << 30;
const int MAX_W = 20, MAX_H = 20;
int board[MAX_W + 1][MAX_H + 1];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int turn, int pos_x, int pos_y) {
  if(turn > 10) return;
  for(int k = 0; k < 4; k++){
    int nx = pos_x, ny = pos_y;
    int px = nx + dx[k], py = ny + dy[k];
    if(px < 0 || px >= H || py < 0 || py >=W) continue;
    if(board[px][py] == 1)continue;

    while(true){
      nx += dx[k], ny += dy[k];
      if(nx <0 || nx >= H || ny <0 || ny >=W){
        break;
      }
      else if(board[nx][ny] ==3){
        ans = min(ans, turn);
        break;
      }else if(board[nx][ny] ==1){
        board[nx][ny] = 0;
        dfs(turn+1, nx-dx[k], ny-dy[k]);
        board[nx][ny] = 1;
        break;
      }
    }
  }
}

int main() {
  int sx, sy;
  ans = INF;
  cin >> W;
  cin >> H;
  for (int i = 0; i < W; i++){
    for (int j = 0; j < H; j++){
      cin >> board[i][j];
      if (board[i][j] == 2){
        sx = i, sy = j;
      }
    }
  }


  dfs(1,sx, sy);

  cout << ans << endl;
  return 0;
}