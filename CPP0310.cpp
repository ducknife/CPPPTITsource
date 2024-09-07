#include <bits/stdc++.h>
using namespace std;
string domin(string s){
    string min = "";
    for (char x : s){
        if (x == '6') min += "5";
        else min.push_back(x);
    }
    return min;
}
string domax(string s){
    string max = "";
    for (char x : s){
        if (x == '5') max += "6";
        else max.push_back(x);
    }
    return max;
}
int main(){
    int test; cin >> test;
    while (test--){
        string s, t; 
        cin >> s; cin >> t;
        long long min = 0, max = 0;
        min += stoll(domin(s)) + stoll(domin(t));
        max += stoll(domax(s)) + stoll(domax(t));
        cout << min << " ";
        cout << max;
        if (test > 0) cout << endl;
    }
}