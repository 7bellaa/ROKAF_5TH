#include <bits/stdc++.h>
using namespace std;

int N, a[20], y, m;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i];
    for (int i = 0; i < N; i++) {
        y += ((a[i] + 30) / 30) * 10;
        m += ((a[i] + 60) / 60) * 15;
    }
    if (y < m) cout << "Y " << y;
    else if (y == m) cout << "Y M " << y;
    else cout << "M " << m;
}