#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int pmax = 1e7;
vector<int>primes;
vector<bool>IsPrime(pmax + 1, true);
void seive(){
    IsPrime[0] = IsPrime[1] = false;
    for (int i = 2; i <= pmax; i++){
        if (IsPrime[i]){
            primes.push_back(i);
            for (ll j = 1ll * i * i; j <= pmax; j += 1ll * i){
                IsPrime[j] = false;
            }
        }
    }
}
void solve(ll n){
    for (int i = 0; i < primes.size(); i++){
        int cnt = 0;
        while (n % primes[i] == 0){
            n /= primes[i];
            cnt++;
        }
        if (cnt > 0) cout << primes[i] << " " << cnt << endl;
    }
    if (n > 1) cout << n << " 1" << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        solve(n);
        if (t > 0) cout << endl;
    }
    return 0;
}