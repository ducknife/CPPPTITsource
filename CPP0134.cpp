#include <iostream>
#include <cmath>
using namespace std;
void divide(int n, int k){
    int run = 0, ok = 1;
    int a[10004];
    for (int i = 2; i <= sqrt(n); i++){
        while (n % i == 0){
            a[run++] = i;
            n /= i; 
        }
    }
    if (n > 1) a[run++] = n;
    if (k > run) cout << -1 << endl;
    else cout << a[k - 1] << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        divide(n, k);
    }
    return 0;
}