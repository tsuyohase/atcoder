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

int N;
int Y;

int solve(){
  return 0;
}

int main() {
  cin >> N >> Y;

  for(int a = 0; a <= N; a++){
    for(int b = 0; b <= N; b++){
      int c = N - a - b;
      if(Y == 10000 * a + 5000 * b + 1000 * c){
        cout << a << " " << b << " " << c << endl;
        break;
      }
    }
  }

  return 0;
}