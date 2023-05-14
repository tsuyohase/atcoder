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
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

void rec(int x, int y){
  room[x][y] = '#';
  ans++;
  for (int i = 0; i < 4; i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx >= 0 && ny >= 0  && nx <= W && ny <= H && room[nx][ny] == '.'){
      rec(nx, ny);
    }
  }
  return;
}

int solve(){
  ans = 0;
  for (int i = 0; i < W; i++){
    for (int j = 0; j < H; j++){
      if(room[i][j] == '@'){
        rec(i,j);
        break;
      }
    }
  }

  return ans;
}

int main() {
  cin >> H >> W;
  for (int i = 0; i < W; i++){
    for(int j = 0; j < H; j++){
      cin >> room[i][j]; 
    }
  }

  int ans = 0;

  ans = solve() -1;

  cout << ans << endl;
  return 0;
}