#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll powmod(ll x, ll y, ll p){
    x %= p;
    ll res = 1;
    while (y){
        if (y % 2 == 1){
            res = (res * x) % p;
        }
        x = (x * x) % p;
        y /= 2;
    }
    return res;
}
int main(){
    int t; cin >> t;
    while (t--){
        string a; cin >> a;
        ll b, m; cin >> b >> m;
        ll res = 0;
        for (int i = 0; i < a.size(); i++){
            res = res * 10 + (a[i] - '0');
            res %= m;
        }
        cout << powmod(res, b, m) << endl;
    }
}