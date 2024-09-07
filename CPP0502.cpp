#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct ThiSinh{
    string ten;
    string ngaysinh;
    double d1, d2, d3;
};
void nhap(ThiSinh &a){
    getline(cin, a.ten);
    cin >> a.ngaysinh;
    cin >> a.d1 >> a.d2 >> a.d3;
}
void in(ThiSinh a){
    cout << a.ten << " " << a.ngaysinh << " ";
    cout << fixed << setprecision(1) << a.d1 + a.d2 + a.d3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
