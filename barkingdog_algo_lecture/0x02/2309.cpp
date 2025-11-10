#include <bits/stdc++.h>
using namespace std;

int h[9], sum;
vector<int> v;

void solve(int idx, int cnt) {
    if (cnt == 7) {
        if (sum != 100) return;
        sort(v.begin(), v.end());
        for (auto i : v) cout << i << '\n';
        exit(0);
    }
    if (idx >= 9) return;

    sum += h[idx];
    v.push_back(h[idx]);
    solve(idx+1, cnt+1);

    sum -= h[idx];
    v.pop_back();
    solve(idx+1, cnt);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for (int i = 0; i < 9; i++) cin >> h[i];
    solve(0, 0);
}