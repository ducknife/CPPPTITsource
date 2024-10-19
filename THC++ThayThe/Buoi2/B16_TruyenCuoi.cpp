#include <bits/stdc++.h>
using namespace std;
/* Codeforces */
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b < c) swap(b, c);
        if (a) {
            cout << a + 2 * c + min(a + 1, b - c + d) << endl;
        } else {
            cout << 1 << endl;
        }
    }
    return 0;
}
