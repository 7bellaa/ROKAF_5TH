#include <bits/stdc++.h>
using namespace std;

int L, N, T, ans, t1;
char t2;
vector<pair<int, bool>> balls;

void init() {
    cin >> L >> N >> T;
    L *= 2;
    T *= 2;
    for (int i = 0; i < N; i++) {
        cin >> t1 >> t2;
        balls.push_back({t1*2, t2=='L'});
    }
}

void solve() {
    for (int i = 0; i <= T; i++) {
        set<pair<int, bool>> vis;
        for (auto &ball : balls) {
            for (auto &other : balls) {
                if (ball == other || ball.first != other.first || vis.find(ball) != vis.end() || vis.find(other) != vis.end()) continue;
                ball.second = !ball.second;
                other.second = !other.second;
                ans++;
                vis.insert(ball);
                vis.insert(other);
            }
        }
        for (auto &ball : balls) {
            if (ball.second) {
                if (ball.first == 0) {ball.second = !ball.second; ball.first++;}
                else ball.first--;
            }
            else {
                if (ball.first == L) {ball.second = !ball.second; ball.first--;}
                else ball.first++;
            }
        }
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    init();
    solve();
}