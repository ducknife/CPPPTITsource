#include <bits/stdc++.h>
using namespace std;
void tolowers(string &s){
    for (char &x : s) x = tolower(x);
}
int main(){
    int n; cin >> n; //so easy if it's the number of testcase, but it's the number of the name;
    cin.ignore();
    string a[n];
    for (int i = 0; i < n; i++){
        getline(cin, a[i]);
        tolowers(a[i]);
    }
    map<string, int>mp;
    vector<string>vt;
    for (int i = 0; i < n; i++){
        stringstream ss(a[i]);
        string word, res = "";
        vector<string>v;
        while (ss >> word){
            v.push_back(word);
        }
        res += v.back();
        for (int i = 0; i < v.size() - 1; i++) res.push_back(v[i][0]);
        vt.push_back(res);
    }
    for (string &s : vt){
        mp[s]++;
        if (mp[s] == 1){
            s += "@ptit.edu.vn";
            cout << s << endl;
        }
        else {
            s += to_string(mp[s]);
            s += "@ptit.edu.vn";
            cout << s << endl;
        }
    }
}