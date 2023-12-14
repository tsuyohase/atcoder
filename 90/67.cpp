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
int K;
int input1;
int input2;


int convert10to8(int n) {
  int res = 0;
  int tmp1 = 0;
  while(n > 0){
    int tmp2 = n % 10;
    n /= 10;
    res += tmp2 * pow(8,tmp1);
    tmp1 ++;
  }
  return res;
}

int convert8to9(int n) {
  int res = 0;
  int tmp1 = 0;
  while(n > 0){
    int tmp2 = n % 9;
    n /= 9;
    if (tmp2 == 8) tmp2 = 5;
    res += tmp2 * pow(8, tmp1);
    tmp1 ++;
  }
  return res;
}

int main() {
  cin >> N >> K;
  int ans = convert10to8(N);
  for (int i = 0; i < K; i++){
    int tmp = convert8to9(ans);
    ans = tmp;
  }
  stack<int> st;
  while(ans > 0){
    st.push(ans % 8);
    ans /= 8;
  }
  while(!st.empty()){
    cout << st.top();
    st.pop();
  }

  cout <<endl;
  return 0;
}
