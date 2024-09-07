#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct SinhVien{
    string ten;
    string ngaysinh;
    string lop;
    double gpa;
};
void ChuanHoaNgaySinh(string &s){
    if (s[2] != '/') s = "0" + s;
    if (s[5] != '/') s.insert(3, "0");
}
void nhap(SinhVien &a){
    getline(cin, a.ten);
    cin >> a.lop >> a.ngaysinh >> a.gpa;
    ChuanHoaNgaySinh(a.ngaysinh);
}
void in(SinhVien a){
    cout << "B20DCCN001" << " " << a.ten << " " << a.lop << " " << a.ngaysinh << " ";
    cout << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}