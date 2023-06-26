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

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H, W;
vector<string> field;

bool visited[510][510];


void dfs(int h, int w){
  visited[h][w] = true;

  for (int dir = 0; dir < 4; dir++){
    int nh = h + dx[dir];
    int nw = h + dy[dir];

    if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
    if (field[nh][nw] == '#') continue;

    if (visited[nh][nw]) continue;

    dfs(nh, nw);
  }
  return;
}

int main() {
  cin >> H >> W;
  field.resize(H);
  for (int h = 0; h < H; h++){
    cin >> field[h];
  }

  int sh, sw, gh, gw;
  for (int h = 0; h < H; h++){
    for (int w = 0; w < W; w++){
      if (field[h][w] == 's') sh = h, sw = w;
      if (field[h][w] == 'g') gh = h, gw = w;
    }
  }

  memset(visited, 0, sizeof(visited));
  dfs(sh, sw);

  cout << visited[gh][gw] << endl;
  return 0;
}