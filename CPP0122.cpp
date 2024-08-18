#include <iostream>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
    while(b){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, lcm = 1;
        cin >> n;
        for (ll i = 1; i <= n; i++){
            lcm = lcm/gcd(lcm, i) * i;
        }
        cout << lcm << endl;
    }
}