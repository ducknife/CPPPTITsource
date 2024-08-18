#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int prime(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int x, cnt = 0;
        cin >> x;
        for (int i = 1; i <= x; i++){
            if (__gcd(i, x) == 1) cnt++;
        }
        if (prime(cnt)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}