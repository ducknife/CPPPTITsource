#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    int ma;
    string ten;
    string lop;
    string ngaysinh;
    double gpa;
};
void ChuanHoaNgaySinh(string &a){
    if (a[2] != '/') a = "0" + a;
    if (a[5] != '/') a.insert(3, "0");
}
void nhap(SinhVien a[], int n){
    for (int i = 0; i < n; i++){
        getline(cin >> ws, a[i].ten);
        getline(cin, a[i].lop);
        getline(cin, a[i].ngaysinh);
        ChuanHoaNgaySinh(a[i].ngaysinh);
        cin >> a[i].gpa;
    }
}
void in(SinhVien a[], int n){
    for (int i = 0; i < n; i++){
        cout << "B20DCCN" << setfill('0') << setw(3) << i + 1 << " ";
        cout << a[i].ten << " " << a[i].lop << " " << a[i].ngaysinh << " ";
        cout << fixed << setprecision(2) << a[i].gpa;
        if (i != n - 1) cout << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}