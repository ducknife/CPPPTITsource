#include <bits/stdc++.h>
#define ll long long
using namespace std;
int even_odd(ll n){
    int odd = 0, even = 0;
    while (n){
        int digit = n % 10;
        if (digit % 2 == 0) even++;
        else odd++;
        n /= 10;
    }
    if ((even + odd) % 2 == 0){
        if (odd == even) return 1;
        else return 0;
    }
}
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    if (n % 2 == 0){
        for (int i = pow(10, n - 1); i < pow(10, n); i++){
            if (even_odd(i)){
                cnt++;
                cout << i << " ";
                if (cnt % 10 == 0) cout << endl;
            }
        }
    }
    return 0;
}