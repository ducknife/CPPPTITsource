#include <bits/stdc++.h>
using namespace std;
int id = 1;
class NhanVien{
    private:
        string ma, ten, gt, ngaysinh, diachi, mathue, ngayki;
    public:
        friend istream& operator >> (istream&in, NhanVien&a){
            if (id < 10) a.ma = "0000" + to_string(id++);
            else a.ma = "000" + to_string(id++);
            getline(in >> ws, a.ten);
            in >> a.gt >> a.ngaysinh;
            getline(in >> ws, a.diachi);
            in >> a.mathue >> a.ngayki;
            return in;
        }
        friend ostream& operator << (ostream&out, NhanVien a){
            out << a.ma << " " << a.ten << " " << a.gt << " " << a.ngaysinh << " " << a.diachi << " ";
            out << a.mathue << " " << a.ngayki << endl;
            return out;
        }
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}