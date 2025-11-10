#include <bits/stdc++.h>
using namespace std;

int a, b, c, n[10];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b >> c;
    a *= b;
    a *= c;

    while (a) {
        n[a%10]++;
        a /= 10;
    }

    for (int i = 0; i < 10; i++) cout << n[i] << '\n';
}