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
bool visited[10];

int solve(){
  return 0;
}

void dfs(const Graph &G, int v) {
  visited[v] = true;

  for (auto next_v : G[v]) {
    if (visited[next_v]) continue;
    dfs(G, next_v);
  }
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

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}