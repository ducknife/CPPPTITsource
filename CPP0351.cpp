#include <bits/stdc++.h>
using namespace std;
void stdname(string &s){
    for (char &x : s) x = tolower(x);
    s[0] = toupper(s[0]);
}
int main(){
    int t; cin >> t;
    while (t--){
        int option; cin >> option;
        cin.ignore();
        string s; getline(cin, s);
        stringstream ss(s);
        string word;
        vector<string>v;
        while(ss >> word){
            stdname(word);
            v.push_back(word);
        }
        if (option == 1){
            cout << v.back() << " ";
            for (int i = 0; i < v.size() - 1; i++){
                cout << v[i];
                if (i != v.size() - 2) cout << " ";
            }
        }
        else {
            for (int i = 1; i < v.size(); i++){
                cout << v[i] << " ";
            }
            cout << v.front();
        }
        if (t > 0) cout << endl;
    }
}