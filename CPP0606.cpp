#include <bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string ten, gt, ngaysinh, diachi, mathue, ngayki;
    public:
        friend istream& operator >> (istream&in, NhanVien &a){
            getline(in, a.ten);
            in >> a.gt >> a.ngaysinh;
            getline(in >> ws, a.diachi);
            in >> a.mathue >> a.ngayki;
            return in;
        }
        friend ostream& operator >> (ostream&out, NhanVien a){
            out << "00001" << " " << a.ten << " " << a.gt << " " << a.ngaysinh << " " << a.diachi << " ";
            out << a.mathue << " " << a.ngayki;
            return out;
        }
};
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}