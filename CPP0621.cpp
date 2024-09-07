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
        string getMa(){
            return ma;
        }
};
bool cmp(SinhVien a, SinhVien b){
    return a.getMa() < b.getMa();
}
int main(){
    SinhVien a;
    vector<SinhVien>v;
    while (cin >> a) v.push_back(a);
    sort(v.begin(), v.end(), cmp);
    for (auto i : v) cout << i;
}