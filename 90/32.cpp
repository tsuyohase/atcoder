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
  int N;
  cin >> N;
  vector<vector<long long>> A(N, vector<long long>(N));
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      cin >> A[i][j];
    }
  }
  int M;
  cin >> M;
  vector<vector<long long>> XY(M, vector<long long> (2));
  for (int i = 0; i < M; i++){
    cin >> XY[i][0] >> XY[i][1];
  }

  vector<int> nums(N);
  iota(nums.begin(), nums.end(), 0);

  long long ans = LONG_LONG_MAX/2;
  do {
    bool valid = true;
    for (int i = 0;  i < M; i++){
      if(abs(nums[XY[i][0]-1] - nums[XY[i][1]-1]) == 1){
        valid = false;
        break;
      }
    }
    if (valid){
      long long tmp = 0;
      for (int j = 0; j < N; j++){
        tmp += A[nums[j]][j];
      }
      ans = min(ans, tmp);
    }
  }while  (next_permutation(nums.begin(), nums.end()));

  if (ans == LONG_LONG_MAX/2) ans = -1;

  cout << ans << endl;
  return 0;
}