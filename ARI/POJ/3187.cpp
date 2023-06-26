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

int N, K;
const int MAX_N = 10;
int board[MAX_N +1][MAX_N +1];

int solve(){
  return 0;
}

int main() {
  cin >> N >>K;
  memset(board, 0, sizeof(board));
  board[0][0] = 1;
  for (int i = 1; i < N; i++){
    board[i][0] = 1;
    for(int j = 1; j < N; j++){
      board[i][j]= board[i-1][j-1] + board[i-1][j];
    }
  }

  int perm[N];
  for(int i = 0; i < N; i++){
    perm[i] = i +1;
  }
  
  do{
    int val = 0;
    for (int i = 0; i < N; i++){
      val += board[N -1][i] * perm[i];
    }
    if(val == K){
      for(int i = 0; i < N; i++) cout << (i !=0 ? " " : "") << perm[i];
      cout << endl;
      return 0;
    }
  }while(next_permutation(perm, perm + N));

  return 0;
}