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

int N, M;
const int MAX_N = 20;

vector<int> color;

int solve(){
  return 0;
}

bool dfs(const Graph &G, int v, int cur = 0) {
  color[v] = cur;
  for (auto next_v:G[v]){
    if (color[next_v] != -1){
      if (color[next_v] == cur) return false;
      continue;
    }

    if (!dfs(G, next_v, 1 - cur)) return false;
  }
  return true;
}

int main() {
  cin >> N >> M;

  Graph G(N);
  for (int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  color.assign(N, -1);
  bool is_bipartite = true;

  for(int v = 0; v < N; v++){
    if (color[v] != -1) continue;
    if (!dfs(G, v)) is_bipartite = false;
  }

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}