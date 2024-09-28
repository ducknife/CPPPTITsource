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
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    seive();
    int a, b; cin >> a >> b;
    if (a > b) swap(a, b);
    for (int i = a; i <= b; i++){
        if (prime[i]) cout << i << " ";
    }
    return 0;
}