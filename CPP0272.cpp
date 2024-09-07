#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll powmod(ll a, ll b){
    ll res = 1;
    while (b){
        if (b % 2 == 1){
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<ll>v(n);
        ll pro = 1;
        for (int i = 0; i < n; i++){
            cin >> v[i]; 
            pro *= v[i];
            pro %= MOD;
        }
        ll gcd = v[0];
        for (int i = 0; i < n; i++) gcd = __gcd(gcd, v[i]);
        cout << powmod(pro, gcd) << endl;
    }
}