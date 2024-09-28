#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
bool Is_prime(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    if (Is_prime(n)) cout << "YES";
    else cout << "NO";
    return 0;
}