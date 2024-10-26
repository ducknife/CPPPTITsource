#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
string Add(string a, string b);
string f[1000];
string FiBo(int n){
    f[0] = "0", f[1] = "1";
    if (n == 0) return f[0];
    if (n == 1) return f[1];
    for (int i = 2; i <= 1000; i++){
        f[i] = Add(f[i - 1], f[i - 2]);
        if (i == n) return f[i];
    }
}
string Add(string a, string b){
    string res;
    int n = a.size(), m = b.size();
    int x[n], y[n], z[n + 1];
    memset(y, 0, sizeof(y));
    for (int i = 0; i < n; i++) x[i] = a[i] - '0';
    for (int i = 0; i < m; i++) y[i] = b[i] - '0';
    reverse(x, x + n); reverse(y, y + m);
    int carry = 0, run = 0;
    for (int i = 0; i < n; i++){
        int tmp = x[i] + y[i] + carry;
        z[run++] = tmp % 10;
        carry = tmp / 10;
    }
    if (carry) z[run++] = carry;
    reverse(z, z + run);
    for (int i = 0; i < run; i++) res.push_back(z[i] + '0');
    return res;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string fibo = FiBo(n);
        ll res = 0;
        for (int i = 0; i < fibo.size(); i++){
            res = res * 10 + 1ll * (fibo[i] - '0');
            res %= MOD;
        }
        cout << res % MOD << endl;
    }
}
