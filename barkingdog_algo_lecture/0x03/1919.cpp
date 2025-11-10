#include <bits/stdc++.h>
using namespace std;

int cnt[26], ans;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string s1, s2;
    cin >> s1 >> s2;

    for (auto c : s1) cnt[c-'a']++;
    for (auto c : s2) cnt[c-'a']--;

    for (int i = 0; i < 26; i++) {
        ans += abs(cnt[i]);
    }
    cout << ans;
}