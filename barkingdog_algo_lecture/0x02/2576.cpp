#include <bits/stdc++.h>
using namespace std;

vector<int> odd;
int n, sum;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for (int i = 0; i < 7; i++) {
        cin >> n;
        if (n % 2) {
            sum += n;
            odd.push_back(n);
        }
    }

    if (sum == 0) cout << -1;
    else cout << sum << '\n' << *min_element(odd.begin(), odd.end());
}

// 벡터 정렬해서 최솟값 찾기