#include <iostream>
#define ll long long
using namespace std;
int fibo(ll n){
    ll f1 = 0, f2 = 1, f;
    if (n == 0 || n == 1) return 1;
    for (int i = 2; i <= 92; i++){
        f = f1 + f2;
        if (f == n) return 1;
        f1 = f2;
        f2 = f;
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        ll n; cin >> n;
        if (fibo(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}