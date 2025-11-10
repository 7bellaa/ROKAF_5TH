#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5]; cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    cout << accumulate(a, a+5, 0) / 5 << '\n';
    sort(a, a+5);
    cout << a[2];
}