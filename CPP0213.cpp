#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#define ll long long
using namespace std;
int fibo(int n){
    ll f1 = 0, f2 = 1, f;
    if (n == 0 || n == 1) return 1;
    for (int i = 1; i <= 90; i++){
        f = f1 + f2;
        if (f == n) return 1;
        f2 = f1;
        f1 = f;
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++){
            if (fibo(a[i])) cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}