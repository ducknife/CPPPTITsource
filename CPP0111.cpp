#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int n = s.length(), a[n], ok = 1;
        for (int i = 0; i < n; i++) a[i] = s[i] - '0';
        for (int i = 0; i < n - 1; i++){
            if (abs(a[i] - a[i + 1]) != 1){
                cout << "NO\n";
                ok = 0;
                break;
            }
        }
        if (ok) cout << "YES\n";
    }
    return 0;
}