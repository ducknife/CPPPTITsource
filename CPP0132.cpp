#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
void divide(long long n){
    long long max_val = -1e9;
    for (long long i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
            max_val = max(max_val, i);
            n /= i;
        }
    }
    if (n > 1) max_val = max(max_val, n);
    cout << max_val << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        divide(n);
    }
    return 0;
}