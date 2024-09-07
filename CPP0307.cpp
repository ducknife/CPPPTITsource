#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        map<string, int>mp;
        string s1, s2;
        getline(cin >> ws, s1);
        getline(cin >> ws, s2);
        stringstream ss(s1);
        string word;
        while (ss >> word){
            mp[word] = 1;
        }
        stringstream ss2(s2);
        string word2;
        while (ss2 >> word2){
            if (mp[word2] == 1) mp[word2] = 2;
        }
        vector<string>v;
        for (auto i : mp){
            if (i.second == 1) {
                v.push_back(i.first);
            }
        }
        for (int i = 0; i < v.size(); i++){
            cout << v[i];
            if (i != v.size() - 1) cout << " ";
        }
        if (t > 0) cout << endl;
    }
}