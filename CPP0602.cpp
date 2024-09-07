#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string ten, lop, ngaysinh;
        double gpa;
    public:
        static void ChuanHoaNgaySinh(string &s){
            if (s[2] != '/') s = "0" + s;
            if (s[5] != '/') s.insert(3, "0");
        }
        friend istream& operator >> (istream &in, SinhVien &a){
            getline(in, a.ten);
            in >> a.lop >> a.ngaysinh >> a.gpa;
            ChuanHoaNgaySinh(a.ngaysinh);
            return in;
        }
        friend ostream& operator << (ostream &out, SinhVien a){
            out << "B20DCCN001 " << a.ten << " " << a.lop << " " << a.ngaysinh << " ";
            out << fixed << setprecision(2) << a.gpa;
            return out;
        }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}