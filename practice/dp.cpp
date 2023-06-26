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
  return 0;
}

int dp1() {
    int n;
    const int MAX_N = 10000;
    int a[MAX_N + 1];

    int dp[MAX_N + 1];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    dp[0] = 0;
    for(int i = 0; i < n; i++){
        dp[i + 1] = max(dp[i], dp[i] + a[i]); 
    }

    return dp[n];
}

int dp2() {
    int n;
    const int MAX_N = 100;
    const int MAX_W = 10000;

    int weight[MAX_N + 1];
    int value[MAX_N + 1];

    int W;

    int dp[MAX_N + 1][MAX_W + 1];

    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> weight[i] >> value[i];
    } 

    cin >> W;

    for (int i = 0; i < n; i++) {
        for (int w = 0; w < W; w++) {
            if (w < weight[i]){
                dp[i+1][w] = dp[i][w];
            }else {
                dp[i + 1][w] = max(dp[i][w - weight[i]] + value[i], dp[i][w]);
            }
        }

        return dp[n][w];
    }
}

int dp3 () {
    int n;
    const int MAX_N = 100;
    int a[MAX_N + 1];
    int A;
    const int MAX_A = 10000;
    int dp[MAX_N + 1][MAX_A + 1];

    memset(dp, 0, sizeof(dp));
    dp[0][0] = true;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> A;

    for (int i = 0; i < n; i ++){
        for (int j = 0; j < A; j++){
            if(j < a[i]){
                dp[i + 1][j] = dp[i][j];
            }else {
                dp[i + 1][j] = dp[i][j] | dp[i][j - a[i]];
            }
        }
    }

    return dp[n][A];
}

int dp4 () {
    const int MOD = 100000009;
    int n, A;
    int a[110];

    int dp[110][10010];

    cin >> n >> A;
    for (int i = 0; i < n; i++) cin >> a[i];

    dp[0][0] = 1;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j < a[i]){
                dp[i + 1][j] = dp[i][j];
            }else {
                dp[i + 1][j] = (dp[i][j - a[i]] + dp[i][j]) % MOD;
            }
        }
    }

    return dp[n][A];
}

int dp5 () {
    const int INF = 2 << 30;
    int n, A;
    int a[110];

    int dp[110][10010];

    cin >> n >> A;
    for (int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < 110; i++) for (int j = 0; j < 10010; j++) dp[i][j] = INF;
    dp[0][0] = 0;

    for (int i = 0; i < n; i++){
        for(int j = 0; j < A; j++){
            if(j < a[i]){
                dp[i+1][j] = dp[i][j];
            }else{
                dp[i + 1][j] = min(dp[i][j - a[i]] + 1, dp[i][j]);
            }
        }
        return dp[n][A];
    }
}

int dp8 () {
    string S, T;
    cin >> S >> T;
    int dp[1010][1010];

    for(int i = 0; i < S.size(); i++){
        for(int j = 0; j < T.size(); j++){
            if(S[i] == T[i]){
                dp[i+1][j+1] = dp[i][j] + 1;
            }else {
                dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }

    return dp[S.size()][T.size()];
}



