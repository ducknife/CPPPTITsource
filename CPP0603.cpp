#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string ten, lop, ngaysinh;
        double gpa;
    public:
        SinhVien(){
            gpa = 0;
            ten = lop = ngaysinh = "";
        }
        friend istream& operator >> (istream&in, SinhVien&a){
            getline(in, a.ten);
            in >> a.lop >> a.ngaysinh >> a.gpa;
            a.ChuanHoaNgaySinh(a.ngaysinh);
            a.ChuanHoaTen(a.ten);
            return in;
        }
        friend ostream& operator << (ostream&out, SinhVien a){
            out << "B20DCCN001" << " " << a.ten << " " << a.lop << " ";
            out << a.ngaysinh << " " << fixed << setprecision(2) << a.gpa;
            return out;
        }
        void ChuanHoaTen(string &);
        void ChuanHoaNgaySinh(string &);
};
void SinhVien::ChuanHoaNgaySinh(string &s){
    if (s[2] != '/') s = "0" + s;
    if (s[5] != '/') s.insert(3, "0");
}
void SinhVien::ChuanHoaTen(string &s){
    string res = "";
    stringstream ss(s);
    string word;
    while (ss >> word){
        for (char &x : word) x = tolower(x);
        word[0] = toupper(word[0]);
        res += word;
        res += " ";
    }
    s.pop_back();
    s = res;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}