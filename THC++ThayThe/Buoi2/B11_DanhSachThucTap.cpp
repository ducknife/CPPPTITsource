#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
/* Codeptit Java */
void DeleteSpace(string &s){
    string res = "";
    string word;
    stringstream ss(s);
    while (ss >> word){
        res += word;
        res += " ";
    }
    res.pop_back();
    s = res;
}
struct SinhVien{
    string msv, ten, lop, emai, dn;
    int id;
    void input(int id){
        this->id = id;
        cin >> msv;
        getline(cin >> ws, ten);
        DeleteSpace(ten);
        cin >> lop >> emai >> dn; 
    }
    void output(){
        cout << id << " " << msv << " " << ten << " " << lop << " " << emai << " " << dn << endl;
    }
};
bool cmp(SinhVien a, SinhVien b){
    return a.msv < b.msv;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<SinhVien> v;
    for (int i = 1; i <= n; i++){
        SinhVien x; x.input(i);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    int q; cin >> q;
    while (q--){
        string s; getline(cin >> ws, s);
        for (SinhVien x : v){
            if (x.dn == s) x.output();
        }
    }
    return 0;
}