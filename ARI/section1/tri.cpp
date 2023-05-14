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
  int n;
  cin >> n;

  int a[n];
  for (int i =0; i<n; i++){
    cin >>a[i];
  }

  int ans = 0;

  for (int i = 0; i<n; i++){
    for (int j = i + 1; j <n; j++){
      for(int k = j +1; k < n; k++){
        int len = a[i] + a[j] + a[k];
        int ma = max(a[i], max(a[j], a[k]));
        int rest = len - ma;

        if (ma < rest) {
          ans = max(ans, len);
        }
      }
    }
  }

  

  cout << ans << endl;
  return ans;
} 