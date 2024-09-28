#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
#define maxN 70005
vector<int> prime(maxN + 1, 1);
vector<ll> ISprime;
void seive(){
    prime[0] = prime[1] = 0;
    for (ll i = 2; i <= maxN; i++){
        if (prime[i]){
            ISprime.push_back(i);
            for (ll j = i * i; j <= maxN; j+=i){
                prime[j] = 0;
            }
        }
    }
}
ll SumOfDigits(ll n){
    ll sum = 0;
    while (n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
ll Divide(ll n){
    ll res = 0;
    for (int i = 0; i < ISprime.size(); i++){
        while (n % ISprime[i] == 0){
            res += SumOfDigits(ISprime[i]);
            n /= ISprime[i];
        }
    }
    if (n > 1) res += SumOfDigits(n);
    return res;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    seive();
    if (SumOfDigits(n) == Divide(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0; 
}