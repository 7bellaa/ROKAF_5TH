#include <bits/stdc++.h>
using namespace std;

int N, M, arr[1025][1025];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
            arr[i][j] += arr[i][j-1];
        }
    }
    for (int j = 1; j <= N; j++) {
        for (int i = 2; i <= N; i++) arr[i][j] += arr[i-1][j];
    }

    while (M--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        cout << arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1] << '\n';
    }
}