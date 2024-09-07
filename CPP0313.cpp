#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1; getline(cin, s1);
    string s2; cin >> s2;
    stringstream ss(s1);
    string word;
    vector<string>a;
    while (ss >> word) a.push_back(word);
    for (int i = 0; i < a.size(); i++){
        if (a[i] != s2){
            cout << a[i];
            if (i != a.size() - 1) cout << " ";
        }
    }
}