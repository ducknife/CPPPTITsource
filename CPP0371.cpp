#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    for (char &x : s) x = tolower(x);
    for (char x : s){
        if (x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u' && x != 'y'){
            cout << "." << x;
        }
    }
}