#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
    return __gcd(a, b);
}
int main(){
    int t; cin >> t;
    while (t--){
        ll a; cin >> a;
        string b; cin >> b;
        ll res = 0;
        for (int i = 0; i < b.size(); i++){
            res = res * 10 + (b[i] - '0');
            res %= a;
        }
        cout << gcd(res, a) << endl;
    }
}