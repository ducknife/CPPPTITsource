#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> res;
    while (ss >> word){
        for (char &x : word) x = tolower(x);
        word[0] = toupper(word[0]);
        res.push_back(word);
    }
    for (char &x : res.back()) x = toupper(x);
    for (int i = 0; i < res.size() - 2; i++){
        cout << res[i] << " ";
    }
    cout << res[res.size() - 2] << ", " << res.back();
    return 0;
}