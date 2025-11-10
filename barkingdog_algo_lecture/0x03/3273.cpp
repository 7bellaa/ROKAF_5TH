#include <bits/stdc++.h>
using namespace std;
int n, a[100001], vis[2000001], x, ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        vis[a[i]] = 1;
    }
    cin >> x;
    for (int i = 0; i < n; i++) {
        if ((x - a[i] >= 0) && vis[x - a[i]]) ans++; // a[i] > x 면 음수 인덱스라 OutOfBounds
    }
    cout << ans/2;
}