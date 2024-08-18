#include <iostream>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        ll b, p;
        cin >> b >> p;
        int cnt = 0;
        for (ll x = 1; x < p; x++){
            if ((x * x) % p == 1){
                ll max =  x + (b / p) * p;
                while (max > b){
                    max -= p;
                }
                cnt += (max - x) / p + 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}