#include <bits/stdc++.h>
using namespace std;
int id = 1;
class SinhVien{
    private:
        string ma, ten, lop, ngaysinh;
        double gpa;
    public:
        friend istream& operator >> (istream&in, SinhVien&a){
            if (id < 10) a.ma = "B20DCCN00" + to_string(id++);
            else a.ma = "B20DCCN0" + to_string(id++);
            getline(in >> ws, a.ten);
            in >> a.lop >> a.ngaysinh >> a.gpa;
            a.ChuanHoaNgaySinh(a.ngaysinh);
            a.ChuanHoaTen(a.ten);
            return in;
        }
        friend ostream& operator << (ostream&out, SinhVien a){
            out << a.ma << " " << a.ten << " " << a.lop << " " << a.ngaysinh << " ";
            out << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
        void ChuanHoaNgaySinh(string &);
        void ChuanHoaTen(string &);
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
    res.pop_back();
    s = res;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}