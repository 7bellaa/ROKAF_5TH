#include <bits/stdc++.h>
using namespace std;

int N, K, tmp;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> N >> K;
    queue<int> Q;
    for (int i = 1; i <= N; i++) Q.push(i);
    cout << '<';

    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < K-1; j++) {Q.push(Q.front()); Q.pop();}
        cout << Q.front() << ", ";
        Q.pop();
    }
    cout << Q.front() << '>';
}