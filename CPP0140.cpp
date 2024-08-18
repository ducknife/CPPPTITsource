#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool sum_d(ll n){
    if (n > 1ll * 1e12) return false;
    ll sum = 1;
    double can = sqrt(n);
    for (int i = 2; i < can; i++){
        if (n % i == 0){
            sum += i;
            if (n/i != i) sum += n/i;
        }
    }
    can = floor(can);
    if (can * can == n) sum += n;
    return sum == n;
}
int main(){
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        if (sum_d(n)) cout << LLONG_MAX << endl;
        else cout << 0 << endl;
    }
}