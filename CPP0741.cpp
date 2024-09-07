#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll powmod(ll a, ll b, ll p){
    a %= p;
    ll res = 1;
    while (b){
        if (b % 2 == 1){
            res = (res * a) % p;
        }
        a = (a * a) % p;
        b /= 2;
    }
    return res;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        ll x, y, p; cin >> x >> y >> p;
        cout << powmod(x, y, p) << endl;
    }
}