#include <bits/stdc++.h>
using namespace std;
void StdString(string &s){
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++) s[i] = tolower(s[i]);
}
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string>v;
    while (ss >> word){
        StdString(word);
        v.push_back(word);
    }
    string res = v.back();
    for (char &x : res) x = toupper(x);
    for (int i = 0; i < v.size() - 1; i++){
        cout << v[i];
        if (i != v.size() - 2) cout << " ";
        else cout << ", ";
    }
    cout << res;
}