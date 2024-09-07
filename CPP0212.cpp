#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        ll f = 0, p = 1;
        for (int i = n - 1; i >= 0; i--){
            f += a[i] * p;
            f %= mod;
            p *= x;
            p %= mod;
        }
        cout << f % mod << endl;
    }
}