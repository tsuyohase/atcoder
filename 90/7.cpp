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


int my_lower_bound(vector<long long> A, long long B){
  int left = -1;
  int right = A.size();
  while(right - left > 1){
    int mid = left + (right - left) / 2;
    if (A[mid] >= B) right = mid;
    else left = mid;
  }
  return right;
}

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; i++){
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  int Q;
  cin >> Q;
  for (int j = 0; j < Q; j++){
    long long B;
    cin >> B;
    int k = lower_bound(A.begin(), A.end(), B) - A.begin();
    long long ans = 1e18;
    if (k < N) ans = min(ans, abs(A[k]- B));
    if (k > 0) ans = min(ans, abs(A[k-1]- B));

    cout << ans << endl;
  }
  return 0;
}