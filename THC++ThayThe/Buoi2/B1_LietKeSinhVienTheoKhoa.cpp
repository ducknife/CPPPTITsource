#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
struct SinhVien{
    string msv, ten, lop, emai, khoa;
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<SinhVien> v;
    int n; cin >> n;
    while (n--){
        SinhVien x; 
        cin >> x.msv;
        getline(cin >> ws, x.ten);
        cin >> x.lop >> x.emai;
        x.khoa = "20" + x.lop.substr(1, 2);
        v.push_back(x);
    }
    int q; cin >> q;
    while (q--){
        string s; cin >> s;
        cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
        for (SinhVien x : v){
            if (x.khoa == s) {
                cout << x.msv << " " << x.ten << " " << x.lop << " " << x.emai << " " << endl;
            }
        }
    }
    return 0;
}