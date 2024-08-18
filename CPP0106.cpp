#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string rs;
        cin >> rs;
        string s = rs;
        reverse(rs.begin(), rs.end());
        if (rs == s) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
