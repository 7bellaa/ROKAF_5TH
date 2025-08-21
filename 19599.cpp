#include <bits/stdc++.h>
using namespace std;

int N, B[500001], T[500001];
int ans1, ans2, ans3;

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

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    fill(B, B+500001, -1);
    fill(T, T+500001, -1);
    binary_search(0, N-1, 0);
    ternary_search(0, N-1, 0);

    for (int i = 0; i < N; i++) {
        if (B[i] < T[i]) ans1++;
        else if (B[i] == T[i]) ans2++;
        else ans3++;
    }

    cout << ans1 << '\n' << ans2 << '\n' << ans3;
}