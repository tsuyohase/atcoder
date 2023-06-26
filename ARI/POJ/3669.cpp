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

int M;
const int MAX_X = 300, MAX_Y = 300;
const int INF = 2 << 30;
int board[MAX_X +1][MAX_Y + 1];
int dx[5] = {-1, 0, 1, 0, 0}, dy[5] = {0, 1, 0, -1, 0};
int d[MAX_X +1][MAX_Y + 1];


int bfs(){
  queue<P> que;
  for (int i = 0; i < MAX_X; i++)
    for (int j = 0; j < MAX_Y; j++) d[i][j] = INF;
  que.push(P(0,0));
  d[0][0] = 0;

  int gx = -1, gy = -1;

  while(!que.empty()){
    P p = que.front(); que.pop();
    int x = p.first, y = p.second;
    if(board[x][y] == INF){
      gx = x, gy = y;
      break;
    }

    for(int k = 0; k < 4; k++){
      int nx = x + dx[k], ny = y + dy[k];
      if(nx >=0 && nx < MAX_X && ny >= 0 && ny < MAX_Y && board[nx][ny] > d[x][y] +1 && d[nx][ny] == INF){
        d[nx][ny] = d[x][y] + 1;
        que.push(P(nx,ny));
      }
    }
  }

  if(gx<0 && gy <0) return -1;

  return d[gx][gy];
}

int main() {
  for (int i = 0; i < MAX_X; i++) for (int j = 0; j < MAX_Y; j++) board[i][j] = INF;
  cin >> M;
  for (int i = 0; i < M; i++){
    int X, Y, T;
    cin >> X;
    cin >> Y;
    cin >> T;
    for (int k = 0; k < 5; k++){
      int nx = X + dx[k], ny = Y + dy[k];
      if (nx >=0 && nx < MAX_X && ny >= 0 && ny< MAX_Y){
        board[nx][ny] = T;
      } 
    }
  }

  int ans = 0;

  ans = bfs();

  cout << ans << endl;
  return 0;
}