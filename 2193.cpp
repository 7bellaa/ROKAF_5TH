#include <bits/stdc++.h>
using namespace std;

// dp[i][0] or dp[i][1] -> 마지막이 0 또는 1인 길이 i 이친수의 개수
long long dp[91][2];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin >> N;
    dp[1][1] = 1;
    for (int i = 2; i <= N; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }
    cout << dp[N][0] + dp[N][1];
}

// 풀면서 생각해보니 피보나치임. n번째 피보나치 수 출력하는게 답임.