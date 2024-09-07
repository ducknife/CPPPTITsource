#include <bits/stdc++.h>
using namespace std;
int id = 1;
class NhanVien{
    private:
        string ma, ten, gt, ngaysinh, diachi, mathue, ngayki;
        int date, month, year;
    public:
        friend istream& operator >> (istream&in, NhanVien&a){
            if (id < 10) a.ma = "0000" + to_string(id++);
            else a.ma = "000" + to_string(id++);
            getline(in >> ws, a.ten);
            in >> a.gt >> a.ngaysinh;
            a.date = stoi(a.ngaysinh.substr(3, 2));
            a.month = stoi(a.ngaysinh.substr(0, 2));
            a.year = stoi(a.ngaysinh.substr(6, 4));
            getline(in >> ws, a.diachi);
            in >> a.mathue >> a.ngayki;
            return in;
        }
        friend ostream& operator << (ostream&out, NhanVien a){
            out << a.ma << " " << a.ten << " " << a.gt << " " << a.ngaysinh << " " << a.diachi << " ";
            out << a.mathue << " " << a.ngayki << endl;
            return out;
        }
        int getDate(){
            return date;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
        }
};
bool cmp(NhanVien a, NhanVien b){
    if (a.getYear() == b.getYear()){
        if (a.getMonth() == b.getMonth())
            return a.getDate() < b.getDate();
        else return a.getMonth() < b.getMonth();
    }
    else return a.getYear() < b.getYear();
}
void sapxep(NhanVien a[], int n){
    sort(a, a + n, cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}