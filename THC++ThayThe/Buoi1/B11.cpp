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
        int odd = 0, even = 0;
        for (int i = 0; i < s.size(); i++){
            if (i % 2 == 0) even += s[i] - '0';
            else odd += s[i] - '0';
        }
        if (abs(odd - even) % 11 == 0) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}