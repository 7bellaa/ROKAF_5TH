#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    long long a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);

    if (b - a <= 1)
        cout << 0;
    else {
        cout << b - a - 1 << '\n';
        for (auto i = a+1; i < b; i++) cout << i << ' ';
    }
}

// a 가 b 보다 클수도 있음
// a == b 인 경우에는 -1이 출력되므로 따로 처리