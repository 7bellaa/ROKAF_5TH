#include <bits/stdc++.h>
using namespace std;

int n;
string s;
char c;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    while (n--) {
        cin >> s;
        list<char> lst;
        auto cur = lst.end();
        for (auto i : s) {
            if (i == '<') {
                if (cur != lst.begin()) cur--;
            }
            else if (i == '>') {
                if (cur != lst.end()) cur++;
            }
            else if (i == '-') {
                if (cur != lst.begin()) {
                    cur--;
                    cur = lst.erase(cur);
                }
            }
            else {
                lst.insert(cur, i);
            }
        }
        for (auto i : lst) cout << i;
        cout << '\n';
    }
}