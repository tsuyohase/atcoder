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

int W, H;
const int MAX_W = 50, MAX_H = 50;
int field[MAX_H][MAX_W];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y){
  field[x][y] = 0;
  for(int k = 0; k < 4; k++){
    int nx = x + dx[k];
    int ny = y + dy[k];
    if(nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
    if(field[nx][ny] == 0) continue;
    
    dfs(nx, ny);
  }
  return;
}

int main() {
  cin >> W >> H;
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      cin >> field[i][j];
    }
  }

  int ans = 0;

  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      if(field[i][j] == 1){
        dfs(i, j);
        ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}