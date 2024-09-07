#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    int tt;
    string ma, ten, lop, email, dn;
    void nhap(){
        cin >> ma;
        getline(cin >> ws, ten);
        cin >> lop >> email >> dn;
    }
    void in(){
        cout << tt << " " << ma << " " << ten << " " << lop << " " << email << " " << dn << endl; 
    }
};
bool cmp(SinhVien a, SinhVien b){
    return a.ma < b.ma;
}
int main(){
    int n; cin >> n;
    vector<SinhVien>v;
    for (int i = 0; i < n; i++){
        SinhVien x; x.tt = i + 1;
        x.nhap();
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    int q; cin >> q;
    while (q--){
        string find; cin >> find;
        for (int i = 0; i < v.size(); i++){
            if (v[i].dn == find) v[i].in();
        }
    }
}