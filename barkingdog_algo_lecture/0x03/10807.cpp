#include <iostream>
using namespace std;

int n, a[101], v, vis[201];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        vis[a[i] + 100]++;
    }
    cin >> v;
    cout << vis[v + 100];
}