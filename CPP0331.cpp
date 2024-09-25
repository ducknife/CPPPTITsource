#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
string Add(string a, string b){
    if (a.size() < b.size()) swap(a, b);
    string res = "";
    int n = a.size(), m = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    b += string(n - m, '0');
    int carry = 0;
    for (int i = 0; i < n; i++){
        int tmp = (a[i] - '0') + (b[i] - '0') + carry;
        res.push_back((tmp % 10) + '0');
        carry = tmp / 10;
    }
    if (carry) res.push_back(carry + '0');
    reverse(res.begin(), res.end());
    return res;
    
}
bool Is_SumString(string s, int l, int len1, int len2){
    string s1 = s.substr(l, len1);
    string s2 = s.substr(l + len1, len2);
    string s3 = Add(s1, s2);
    if (s3.size() > s.size() - len1 - len2 - l) return false;
    if (s3 == s.substr(l + len1 + len2, s3.size())){
        if (s3.size() == s.size() - len1 - len2 - l) return true;
        else return Is_SumString(s, l + len1, len2, s3.size());
    }
    return false;
}
void Solve(){
    string s; cin >> s;
    for (int len1 = 1; len1 <= s.size(); len1++){
        for (int len2 = 1; len2 <= s.size() - len1; len2++){
            if (Is_SumString(s, 0, len1, len2)){
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        Solve();
    }
    return 0;
}