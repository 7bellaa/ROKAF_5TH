#include <bits/stdc++.h>
using namespace std;

stack<int> S;
string op;
int n, a;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    while (n--) {
        cin >> op;
        if (op == "push") {
            cin >> a;
            S.push(a);
        }
        else if (op == "top") {
            if (S.empty()) cout << "-1\n";
            else cout << S.top() << '\n';
        }
        else if (op == "size") {
            cout << S.size() << '\n';
        }
        else if (op == "empty") {
            cout << (int)S.empty() << '\n';
        }
        else if (op == "pop") {
            if (S.empty()) cout << "-1\n";
            else {
                cout << S.top() << '\n';
                S.pop();
            }
        }
    }
}