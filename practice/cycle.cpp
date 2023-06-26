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

vector<bool> seen, finished;

int pos = -1;
stack<int> hist;

int solve(){
  return 0;
}

void dfs(const Graph &G, int v, int p) {
  seen[v] = true;
  hist.push(v);
  for (auto nv : G[v]){
    if (nv == p) continue;

    if (finished[nv]) continue;

    if (seen[nv] && !finished[nv]) {
      pos = nv;
      return;
    }

    dfs(G, nv, v);

    if (pos != -1) return;
  }
  hist.pop();
  finished[v] = true;
}

int main() {
  int N;
  cin >> N;

  Graph G(N);
  
  for (int i = 0; i < N; i++){
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  seen.assign(N, false), finished.assign(N, false);
  pos = -1;
  dfs(G, 0, -1);

  int ans = 0;

  ans = solve();

  cout << ans << endl;
  return 0;
}