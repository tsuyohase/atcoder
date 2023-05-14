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

int W;
int H;
int ans;
const int MAX_W = 20;
const int MAX_H = 20;
char room[MAX_W + 1][MAX_H + 1];
bool visited[MAX_W + 1][MAX_H + 1];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
  for(int k = 0; k < 4; k++){
    int nx = x + dx[k], ny = y + dy[k];
    if (nx >= 0 && nx < H && ny >= 0 && ny < W && room[nx][ny] == '.' && !visited[nx][ny]){
      visited[nx][ny] = true;
      dfs(nx, ny);
    }
  }
}

int main() {
  int sx, sy;
  memset(visited, false, sizeof(visited));
  cin >> H >> W;
  for (int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> room[i][j]; 
      if (room[i][j] == '@'){
        sx = i, sy =j;
      }
    }
  }

  visited[sx][sy] = true;
  dfs(sx, sy);

  int ans = 0;

  for(int i =0; i < H; i++){
    for (int j =0; j < W; j++){
      if (visited[i][j]) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}