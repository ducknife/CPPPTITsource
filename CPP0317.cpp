#include <bits/stdc++.h>
using namespace std;
int EvenDigits(string s){
    for (char x : s){
        if ((x - '0') % 2 != 0) return 0;
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        string tmp = s;
        reverse(tmp.begin(), tmp.end());
        if (tmp == s && EvenDigits(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}