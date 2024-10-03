#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

typedef long long ll;
ll n, a, b;
vector<pair<ll, ll>> coordinates;

ll calcArea(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) {
    return (x2-x1)*(y3-y1) - (x3-x1)*(y2-y1);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        coordinates.push_back({a, b});
    }

    double ans = 0;
    auto point = coordinates.front();
    for (int i = 2; i < n; i++) {
        ans += calcArea(point.X, point.Y, coordinates[i-1].X, coordinates[i-1].Y, coordinates[i].X, coordinates[i].Y);
    }
    cout << fixed;
    cout.precision(1);
    cout << fabs(ans / 2); // 여기 절댓값 빼먹어서 틀림.
}

// 다각형이 볼록하다는 보장이 없기 때문에 calcArea에서 먼저 절댓값을 씌우면 안된다.
// 그리고 마지막에 ans / 2 출력할 때 절댓값 씌워야 함.