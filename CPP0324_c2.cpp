#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll powmod(ll a, ll b, ll p){
  if (b == 1) return a % p;
  ll res = powmod(a, b / 2, p);
  res = (res * res) % p;
  if (b % 2) return res * a % p;
  else return res % p;
}
int main(){
    int t; cin >> t;
    while (t--){
        string a; cin >> a;
        ll b, m; cin >> b >> m;
        ll res = 0;
        for (int i = 0; i < a.size(); i++){
            res = res * 10 + (a[i] - '0');
            res %= m;
        }
        cout << powmod(res, b, m) << endl;
    }
}
