#include <bits/stdc++.h>
using namespace std;

int Q, B[5001], T[5001];

void binary_search(int left, int right, int dist) {
    if (left > right) return;
    int mid = (left + right) / 2;

    if (B[mid] == -1) B[mid] = dist;

    binary_search(left, mid-1, dist+1);
    binary_search(mid+1, right, dist+1);
}

void ternary_search(int left, int right, int dist) {
    if (left > right) return;
    int left_third = left + (right - left) / 3;
    int right_third = right - (right - left) / 3;

    if (T[left_third] == -1) T[left_third] = dist;
    if (T[right_third] == -1) T[right_third] = dist+1;

    ternary_search(left, left_third-1, dist+2);
    ternary_search(left_third+1, right_third-1, dist+2);
    ternary_search(right_third+1, right, dist+2);
}

void solve() {
    fill(B, B+5001, -1);
    fill(T, T+5001, -1);
    int N, s, e; cin >> N >> s >> e;
    binary_search(0, N-1, 0);
    ternary_search(0, N-1, 0);

    cout << accumulate(T+s, T+e+1, 0) - accumulate(B+s, B+e+1, 0) << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> Q;
    while (Q--) solve();
}