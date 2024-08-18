#include <iostream>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        ll sum = 0;
        int n; cin >> n;
        sum = 1ll * n * (n + 1) / 2;
        cout << sum << endl;
    }
    return 0;
}