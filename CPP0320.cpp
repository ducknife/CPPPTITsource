#include <bits/stdc++.h>
using namespace std;
bool checkdigits(string s){
    for (char x : s){
        if (!isdigit(x)) return false;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        if (s[0] == '0' || !checkdigits(s)) cout << "INVALID" << endl;
        else {
            set<char>FullNum;
            for (char x : s){
                FullNum.insert(x);
            }
            if (FullNum.size() == 10) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}