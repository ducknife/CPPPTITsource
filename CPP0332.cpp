#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin, s);
    for (char &x : s) x = tolower(x);
    stringstream ss(s);
    string word;
    vector<string>v;
    while (ss >> word){
        v.push_back(word);
    }
    string res = v.back();
    for (int i = 0; i < v.size() - 1; i++){
        res.push_back(v[i][0]);
    }
    res += "@ptit.edu.vn";
    cout << res;
}