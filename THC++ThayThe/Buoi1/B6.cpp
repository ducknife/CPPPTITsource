#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define maxN 10005
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
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        for (int i = 2; i <= n; i++){
            if (prime[i]) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}