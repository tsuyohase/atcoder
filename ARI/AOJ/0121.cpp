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

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
map< vector<int>, int > mp;

void init(vector<int> vs) {
  queue<vector<int> > que;
  que.push(vs);

  while(!que.empty()){
    vector<int> p = que.front(); que.pop();

    int idx = -1;
    for(int i = 0; i < 8; i++){
      if (p[i] == 0){
        idx = i;
        break;
      }
    }

    for (int k = 0; k < 4; k++){
      int nx = (idx / 4) + dx[k];
      int ny = (idx % 4) + dy[k];

      if(nx < 0 || nx >= 2 || ny < 0 || ny >= 4) continue;
      int nc = nx * 4 + ny;
      vector<int> tmp = p;
      swap(tmp[nc], tmp[idx]);
      if(mp.count(tmp)) continue;
      mp[tmp] = mp[p] + 1;
      que.push(tmp);
    }
  }
}

int main() {
  vector<int> v(8);
  iota(v.begin(), v.end(), 0);
  mp[v] = 0;
  init(v);
  int ans = 0;

  string s;
  while (getline(cin, s)){
    stringstream ss(s);
    vector<int> vs;
    int val;
    while(ss >> val) vs.push_back(val);

    cout << mp[vs] <<endl;
  }
  return 0;
}