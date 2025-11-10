#include <bits/stdc++.h>
using namespace std;

string s;
list<char> lst;
int M;
char op, c;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> s;
    for (auto i : s) lst.push_back(i);
    auto cur = lst.end();
    
    cin >> M;
    while (M--) {
        cin >> op;
        if (op == 'L') {
            if (cur != lst.begin()) cur--;
        }
        else if (op == 'D') {
            if (cur != lst.end()) cur++;
        }
        else if (op == 'B') {
            if (cur != lst.begin()) {
                cur--;
                cur = lst.erase(cur);
            }
        }
        else {
            cin >> c;
            lst.insert(cur, c);
        }
    }
    for (auto i : lst) cout << i;
}