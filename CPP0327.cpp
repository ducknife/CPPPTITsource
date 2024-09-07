#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        ll res = 0, pow = 1;
        for (int i = s.size() - 1; i >= 0; i--){
            res += 1ll * (s[i] - '0') * pow;
            res %= 5;
            pow *= 2;
            pow %= 5;
        }
        if (res % 5 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}