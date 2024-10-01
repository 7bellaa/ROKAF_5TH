#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, t, ans;
vector<ll> h;
vector<pair<ll, ll>> a;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> t;
        h.push_back(t);
    }
    for(ll i = 0; i < n; i++) {
        cin >> t;
        a.push_back({t, i});
    }

    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++) {
        ans += h[a[i].second] + (a[i].first * i);
    }
    cout << ans;
}