#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string ten;
        string lop;
        string ngaysinh;
        double gpa;
    public:
        void ChuanHoaNgaySinh(string &s){
            if (s[2] != '/') s = "0" + s;
            if (s[5] != '/') s.insert(3, "0");
        }
        void nhap(){
            getline(cin, ten);
            cin >> lop >> ngaysinh >> gpa;
            ChuanHoaNgaySinh(ngaysinh);
        }
        void xuat(){
            cout << "B20DCCN001" << " " << ten << " " << lop << " " << ngaysinh << " ";
            cout << fixed << setprecision(2) << gpa;
        }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}