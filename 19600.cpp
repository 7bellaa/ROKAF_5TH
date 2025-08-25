#include <bits/stdc++.h>
using namespace std;

int Q, B[5001][5001], T[5001][5001];

void binary_search(int N, int left, int right, int dist) {
    if (left > right) return;
    int mid = (left + right) / 2;

    if (B[N][mid] == -1) B[N][mid] = dist;

    binary_search(N, left, mid-1, dist+1);
    binary_search(N, mid+1, right, dist+1);
}

void ternary_search(int N, int left, int right, int dist) {
    if (left > right) return;
    int left_third = left + (right - left) / 3;
    int right_third = right - (right - left) / 3;

    if (T[N][left_third] == -1) T[N][left_third] = dist;
    if (T[N][right_third] == -1) T[N][right_third] = dist+1;

    ternary_search(N, left, left_third-1, dist+2);
    ternary_search(N, left_third+1, right_third-1, dist+2);
    ternary_search(N, right_third+1, right, dist+2);
}

void init() {
    fill(&B[0][0], &B[5000][5001], -1);
    fill(&T[0][0], &T[5000][5001], -1);

    for (int n = 1; n <= 5000; n++) {
        binary_search(n, 0, n-1, 0);
        ternary_search(n, 0, n-1, 0);

        for (int i = 1; i < n; i++) {
            B[n][i] += B[n][i-1];
            T[n][i] += T[n][i-1];
        }
    }
}

void solve() {
    int N, s, e; cin >> N >> s >> e;
    int Tsum = T[N][e];
    if (s > 0) Tsum -= T[N][s-1];

    int Bsum = B[N][e];
    if (s > 0) Bsum -= B[N][s-1];
    cout << Tsum - Bsum << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    init();
    cin >> Q;
    while (Q--) solve();
}