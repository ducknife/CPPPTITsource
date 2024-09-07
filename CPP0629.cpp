#include <bits/stdc++.h>
using namespace std;
class doanhnghiep{
    private:
        string ma;
        string ten;
        int soluong;
    public:
        friend istream& operator >> (istream& in, doanhnghiep &a){
            getline(in >> ws, a.ma);
            getline(in, a.ten);
            in >> a.soluong;
            return in;
        }
        friend ostream& operator << (ostream& out, doanhnghiep a){
            out << a.ma << " " << a.ten << " " << a.soluong << endl;
            return out;
        }
        int getsoluong(){
            return soluong;
        }
        string getma(){
            return ma;
        }
};
bool cmp(doanhnghiep a, doanhnghiep b){
    if (a.getsoluong() == b.getsoluong()) return a.getma() < b.getma();
    else return a.getsoluong() > b.getsoluong();
}
int main(){
    int n; cin >> n;
    vector<doanhnghiep>v;
    for (int i = 0; i < n; i++){
        doanhnghiep x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    int q; cin >> q;
    while (q--){
        int l, r; cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:" << endl;
        for (int i = 0; i < v.size(); i++){
            if (v[i].getsoluong() >= l && v[i].getsoluong() <= r) cout << v[i];
        }
    }
}
