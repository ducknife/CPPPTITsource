#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string ten;
    string lop;
    string ngaysinh;
    double gpa;
};
void ChuanHoaNgaySinh(string &s){
    if (s[2] != '/') s = "0" + s;
    if (s[5] != '/') s.insert(3, "0");
}
void nhapThongTinSV(SinhVien &a){
    getline(cin, a.ten);
    cin >> a.lop >> a.ngaysinh >> a.gpa;
    ChuanHoaNgaySinh(a.ngaysinh);
}
void inThongTinSV(SinhVien a){
    cout << "N20DCCN001" << " " << a.ten << " " << a.lop << " " << a.ngaysinh << " ";
    cout << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}