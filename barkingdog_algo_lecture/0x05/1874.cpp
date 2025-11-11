#include <bits/stdc++.h>
using namespace std;

int n, a, i = 1;
vector<int> v;
stack<int> S;
string ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    S.push(0);
    while (n--) {
        cin >> a;
        while (S.top() != a) {
            if (i > a) {cout << "NO"; return 0;}
            else {S.push(i++); ans += "+\n";}
        }
        S.pop();
        ans += "-\n";
    }

    cout << ans;
}