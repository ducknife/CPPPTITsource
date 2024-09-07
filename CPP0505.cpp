#include <iostream>
#include <string>
using namespace std;
struct NhanVien{
    string ten, gt, ngaysinh, dc, mathue, ngayki;
};
void nhap(NhanVien&a){
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ngaysinh);
    getline(cin, a.dc);
    cin >> a.mathue >> a.ngayki;
}
void in(NhanVien a){
    cout << "00001 " << a.ten << " " << a.gt << " " << a.ngaysinh << " " << a.dc << " " << a.mathue << " " << a.ngayki;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}