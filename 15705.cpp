#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int dx[] = {1,0,-1,0,1,1,-1,-1};
int dy[] = {0,1,0,-1,1,-1,1,-1};
char board[100][100];
string s;
int n, m, len, ans;

void init() {
    cin >> s;
    len = s.size();
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> board[i][j];
    }
}

void search(int curX, int curY, int dir, int idx) {
    if (board[curX][curY] != s[idx]) return;
    if (idx+1 == len) {ans = 1; return;}
    if (curX < 0 || curX >= n || curY < 0 || curY >= m) return;
    search(curX+dx[dir], curY+dy[dir], dir, idx+1);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    init();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int dir = 0; dir < 8; dir++) search(i, j, dir, 0);
        }
    }
    cout << ans;
}