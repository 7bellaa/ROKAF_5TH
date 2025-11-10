#include <bits/stdc++.h>
using namespace std;

int main(void) {
    for (int i = 0; i < 3; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        switch (a+b+c+d) {
            case 0: cout << "D"; break;
            case 1: cout << "C"; break;
            case 2: cout << "B"; break;
            case 3: cout << "A"; break;
            case 4: cout << "E"; break;
        }
        cout << '\n';
    }
}