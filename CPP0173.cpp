#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;
ll lcm(ll a, ll b){
    return a/__gcd(a, b) * b;
}
void check(){
    int n, x, y, z;
    cin >> x >> y >> z >> n;
    ll min = pow(10, n - 1);
    ll max = pow (10, n);
    ll lcm_xyz = lcm(x, lcm(y, z));
    if (lcm_xyz > max){
        cout << -1 << endl;
        return;
    }
    if (min % lcm_xyz == 0) cout << min << endl;
    else cout << (min/lcm_xyz + 1) * lcm_xyz << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        check();
    }
    return 0;
}