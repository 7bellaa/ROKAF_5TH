#include <bits/stdc++.h>
using namespace std;

int s, g, p[13], ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k; cin >> n >> k;
    while (n--) {
        cin >> s >> g;
        p[6*s + g]++;
    }
    for (int i = 1; i <= 12; i++) ans += (p[i] + k - 1) / k;
    cout << ans;
}