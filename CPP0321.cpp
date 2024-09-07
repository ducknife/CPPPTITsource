#include <bits/stdc++.h>
using namespace std;
void sub(string x, string y){
    int n = x.size(), m = y.size();
    int a[n], b[n], c[n];
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++) a[i] = x[i] - '0';
    for (int i = 0; i < m; i++) b[i] = y[i] - '0';
    reverse(a, a + n); reverse(b, b + m);
    int mem = 0, len = 0;
    for (int i = 0; i < n; i++){
        int tmp = a[i] - b[i] - mem;
        if (tmp < 0){
            mem = 1;
            c[len++] = 10 + tmp;
        }
        else {
            mem = 0;
            c[len++] = tmp;
        }
    }
    if (mem) c[len++] = mem;
    for (int i = n - 1; i >= 0; i--) cout << c[i];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        string a, b; cin >> a >> b;
        if (a.length() > b.length() || a.length() == b.length() && a > b) sub(a, b);
        else sub(b, a);
        if (t > 0) cout << endl;
    }
}