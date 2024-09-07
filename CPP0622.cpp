#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string ma, ten, lop, email;
    public:
        friend istream& operator >> (istream&in, SinhVien&a){
            in >> a.ma;
            getline(in >> ws, a.ten);
            in >> a.lop >> a.email;
            return in;
        }
        friend ostream& operator << (ostream&out, SinhVien a){
            out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
            return out;
        }
        string getLop(){
            return lop;
        }
};
int main(){
    int n; cin >> n;
    vector<SinhVien>v;
    for (int i = 0; i < n; i++){
        SinhVien x; cin >> x;
        v.push_back(x);
    }
    int q; cin >> q;
    while (q--){
        string s; cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        for (auto i : v) if (i.getLop() == s) cout << i;
    }
}