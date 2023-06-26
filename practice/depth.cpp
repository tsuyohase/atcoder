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


int solve(){
  return 0;
}

vector<int> depth;

void dfs(const Graph &G, int v, int p, int d) {
  depth[v] = d;
  for (auto nv : G[v]) {
    if (nv == p) continue;
    dfs(G, nv, v, d+1);
  }
}

int main() {
  cin >> N >> M;
  depth.assign(N, 0);
  Graph G(N);
  for (int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}