#include <iostream>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        ll mK = n / k;
        ll s = (n - mK * k + 1) * (n - mK * k) / 2 + mK * (k - 1) * k / 2;
        cout << s << endl;
    }
    return 0;
}