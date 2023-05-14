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

int H, W;
const int MAX_HW = 100;
char board[MAX_HW + 1][MAX_HW + 1];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
bool visited[MAX_HW + 1][MAX_HW + 1];

void dfs(int x, int y){
  visited[x][y] = true;
  for (int k = 0; k < 4; k++){
    int nx = x + dx[k], ny = y + dy[k];
    if(nx >=0 && nx < H && ny >= 0 && ny < W &&!visited[nx][ny] && board[x][y] == board[nx][ny]){
      dfs(nx, ny);
    }
  }
}

int main() {
  int ans = 0;
  cin >> H;
  cin >> W;
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      cin >> board[i][j];
    }
  }

  for (int i = 0; i < H; i++){
    for (int j = 0; j< W; j++){
      if (!visited[i][j]){
        dfs(i,j);
        ans ++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}