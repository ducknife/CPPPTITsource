#include <bits/stdc++.h>
using namespace std;
void add(string a, string b){
    int n = a.size(), m = b.size();
    int x[n], y[n], z[n + 1];
    for (int i = 0; i < n; i++) x[i] = a[i] - '0';
    memset(y, 0, sizeof(y));
    for (int i = 0; i < m; i++) y[i] = b[i] - '0';
    reverse(x, x + n); reverse(y, y + m);
    int mem = 0, len = 0;
    for (int i = 0; i < n; i++){
        int tmp = x[i] + y[i] + mem;
        z[len++] = tmp % 10;
        mem = tmp / 10;
    }
    if (mem) z[len++] = mem;
    reverse(z, z + len);
    for (int i = 0; i < len; i++) cout << z[i];
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        string a, b; cin >> a >> b;
        if (a.length() >= b.length()) add(a, b);
        else add(b, a);
    }
}