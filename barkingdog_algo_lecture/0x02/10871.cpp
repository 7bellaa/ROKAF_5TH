#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    while (n--) {
        int t; cin >> t;
        if (t < x) cout << t << ' ';
    }
}