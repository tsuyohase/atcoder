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

char board[6][6];
set<string> S;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

void dfs(int turn, int x, int y, string s){
  if(turn == 5){
    S.insert(s);
    return;
  }
  for(int k = 0; k < 4; k++){
    int nx = x +dx[k], ny = y + dy[k];
    if(nx>=0 && nx < 5 && ny >=0 && ny < 5){
      dfs(turn + 1, nx, ny, s + board[nx][ny]);
  }
  
  }
 
  return;
}

int main() {
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      cin >> board[i][j];
    }
  } 

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      dfs(0,i,j,"" + board[i][j]);
    }
  }

  int ans = S.size();

  cout << ans << endl;
  return 0;
}