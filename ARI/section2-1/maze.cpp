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

const int INF = 100000000;

int N;
int M;
const int MAX_N = 100;
const int MAX_M = 100;
int maze[MAX_N][MAX_M + 1];
int sx, sy;
int gx, gy;

int d[MAX_N][MAX_M];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs(){
  queue<P> que;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      d[i][j] = INF;
    }
  }
  que.push(P(sx, sy));
  d[sx][sy] = 0;

  while (que.size()){
    P p =que.front(); que.pop();
    if (p.first == gx && p.second == gy) break;
    for (int i = 0; i < 4; i++){
      int nx = p.first + dx[i], ny = p.second + dy[i];

      if (0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF){
        que.push(P(nx, ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }
  return d[gx][gy];


}

int solve(){
  int res = bfs();
  return res;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      cin >> maze[i][j];
    }
  }

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}