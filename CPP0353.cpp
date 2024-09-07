#include <bits/stdc++.h>
using namespace std;
bool checkrev(string s){
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    if (tmp != s) return false;
    else return true;
}
map<char, char>mp;
void KeyBoard(){
    mp['A'] = mp['B'] = mp['C'] = '2';
    mp['D'] = mp['E'] = mp['F'] = '3';
    mp['G'] = mp['H'] = mp['I'] = '4';
    mp['J'] = mp['K'] = mp['L'] = '5';
    mp['M'] = mp['N'] = mp['O'] = '6';
    mp['P'] = mp['Q'] = mp['R'] = mp['S'] = '7';
    mp['T'] = mp['U'] = mp['V'] = '8';
    mp['W'] = mp['X'] = mp['Y'] = mp['Z'] = '9';
}
int main(){
    KeyBoard();
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        for (char &x : s) x = toupper(x);
        string res = "";
        for (char x : s) res.push_back(mp[x]);
        if (checkrev(res)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}