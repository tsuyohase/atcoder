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


int main() {
  int N, M, s, t;
  cin >> N >> M >> s >> t;

  Graph G(N);
  for (int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }

  vector<int> dist(N, -1);
  queue<int> que;
  dist[s] = 0;
  que.push(s);
  while(!que.empty()){
    int v = que.front();que.pop();
    for (auto nv : G(v)) {
      if (dist[nv] == -1) {
        dist[nv] = dist[v] + 1;
        que.push(nv);
      }
    }
  }

  if (dist[t] != -1) cout << "Yes" << endl;

  return 0;
}