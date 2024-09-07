#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    if (a.size() == b.size()) return a < b;
    else return a.size() < b.size();
}
void erase0(string &s){
    while (s.size() > 1 && s[0] == '0'){
        s.erase(0, 1);
    }
}
int main(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        for (char &x : s){
            if (!isdigit(x)) x = ' ';
        }
        stringstream ss(s);
        string num;
        vector<string>v;
        while (ss >> num){
            erase0(num);
            v.push_back(num);
        }
        sort(v.begin(), v.end(), cmp);
        cout << *v.rbegin() << endl;
    }
}