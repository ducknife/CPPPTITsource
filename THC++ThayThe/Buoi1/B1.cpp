#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        string tmp = s;
        reverse(tmp.begin(), tmp.end());
        if (s == tmp) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}