#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define maxN 10000005
using namespace std;
int prime[maxN];
void seive(){
    for (int i = 2; i <= maxN; i++) prime[i] = 1;
    for (int i = 2; i * i <= maxN; i++){
        if (prime[i]){
            for (int j = i * i; j <= maxN; j+=i){
                prime[j] = 0;
            }
        }
    }
}
void solve(int n){
    for (int i = 0; i <= n / 2; i++){
        if (prime[i] && prime[n - i]){
            cout << i << " " << n - i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        solve(n);
    }
    return 0;
}