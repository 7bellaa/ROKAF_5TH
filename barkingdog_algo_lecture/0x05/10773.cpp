#include <bits/stdc++.h>
using namespace std;

stack<int> S;
int k, n;
long long sum;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> k;
    while (k--) {
        cin >> n;
        if (n == 0) {
            sum -= S.top();
            S.pop();
        }
        else {
            sum += n;
            S.push(n);
        }
    }

    cout << sum;
}