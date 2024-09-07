#include <bits/stdc++.h>
using namespace std;
#define IamDuckNife() ios::sync_with_stdio(0); cin.tie(0);
bool CheckDiff(string a, string b){
    int cnt = 0;
    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i]) cnt++;
    }
    return cnt == 2;
}
int main(){
    IamDuckNife();
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        string tmp = s;
        vector<string>res;
        while (prev_permutation(s.begin(), s.end())){
            if (CheckDiff(tmp, s)){
                if (s[0] != '0') {
                    res.push_back(s);
                    break;
                }
            }
        }
        if (res.empty()) cout << -1 << endl;
        else cout << res.front() << endl;
    }
}