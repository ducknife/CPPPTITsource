#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        string s; getline(cin >> ws, s);
        stringstream ss(s);
        string num;
        int cnt = 0, ttodd = 0, tteven = 0;
        while (ss >> num){
            int a = stoi(num);
            cnt++;
            if (a % 2 == 0) tteven++;
            else ttodd++;
        }
        if (cnt % 2 == 0 && tteven > ttodd) cout << "YES" << endl;
        else if (cnt % 2 == 1 && ttodd > tteven) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}