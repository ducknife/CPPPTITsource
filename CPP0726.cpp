#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll MOD(ll a, ll b, ll c){
    if (b == 0) return 0;
    if (b == 1) return a % c;
    ll tmp = MOD(a, b / 2, c);
    if (b % 2 == 0) return tmp * 2 % c;
    else return (tmp * 2 % c + a) % c;
}
int main(){
    int t; cin >> t;
    while (t--){
        ll a, b, c;
        cin >> a >> b >> c;
        cout << MOD(a, b, c) << endl;
    }
}