#include <bits/stdc++.h>
using namespace std;

int n, cnt[10];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    while (n) {
        cnt[n%10]++;
        n /= 10;  
    }
    cnt[6] = (cnt[6] + cnt[9] + 1) / 2;
    cnt[9] = 0;
    cout << *max_element(cnt, cnt+10);
}