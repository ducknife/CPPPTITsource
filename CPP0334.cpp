#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        for (char &x : s){
            if (!isdigit(x)) x = ' ';
        }
        int sum = 0;
        stringstream ss(s);
        string number;
        while (ss >> number){
            sum += stoi(number);
        }
        cout << sum << endl;
    }
}