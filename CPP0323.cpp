#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; getline(cin >> ws, s);
        ll m; cin >> m;
        ll res = 0;
        for (int i = 0; i < s.size(); i++){
            res = res * 10 + (s[i] - '0');
            res %= m;
        }
        cout << res << endl;
    }
}