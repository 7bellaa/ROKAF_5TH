#include <bits/stdc++.h>
using namespace std;

int dp[10001][3], arr[10001], N;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> arr[i];

    for (int i = 1; i <= N; i++) {
        dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
        dp[i][1] = dp[i-1][0] + arr[i];
        dp[i][2] = dp[i-1][1] + arr[i];
    }

    cout << max({dp[N][0], dp[N][1], dp[N][2]});
}