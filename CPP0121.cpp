#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        cout << 1ll * a/__gcd(a, b) * b << " " << __gcd(a, b) << endl;
    }
    return 0;
}