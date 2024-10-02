#include <bits/stdc++.h>
using namespace std;

vector<int> fibo = {1, 2};
int n, t;

void init() {
    int i = 0;
    while (fibo.back() < 25000) {
        fibo.push_back(fibo[i] + fibo[i+1]);
        i++;
    }
    cin >> n;
}

int kiloToMile(int x) {
    vector<int> bx;
    int idx = fibo.size()-1, startIdx = -1;

    for (; idx >= 0; idx--) {
        if (fibo[idx] > x) continue;
        if (startIdx == -1) startIdx = idx;

        bx.push_back(idx);
        x -= fibo[idx];
        if (x == 0) break;
    }
    
    int y = 0;
    for (auto i : bx) {
        if (i >= 1) y += fibo[i-1];
    }
    return y;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    init();
    while (n--) {
        cin >> t;
        cout << kiloToMile(t) << '\n';
    }
}

// https://www.acmicpc.net/source/84515264
// 어차피 마지막자리 버릴거니까 애초에 for문 돌릴때 idx > 0 으로 돌리고 인덱스 따로 모아서 다시 계산할 필요 없이 바로바로 계산하면 됨.