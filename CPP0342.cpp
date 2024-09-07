#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int sum = 0;
        for (char x : s){
            if (isdigit(x)) sum += x - '0';
        }
        sort(s.begin(), s.end());
        for (char x : s){
            if (isupper(x)) cout << x;
        }
        cout << sum << endl;
    }
}