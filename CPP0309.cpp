#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s;
        getline(cin >> ws, s);
        stringstream ss(s);
        string word;
        int cnt = 0;
        while (ss >> word){
            cnt++;
        }
        cout << cnt;
        if (t > 0) cout << endl;
    }
}