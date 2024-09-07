#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
    string ten, gt, ngaysinh, diachi, mathue, ngayki;
};
void nhap(NhanVien &a){
    getline(cin >> ws, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ngaysinh);
    getline(cin, a.diachi);
    cin >> a.mathue >> a.ngayki;
}
void inds(NhanVien a[], int n){
    for (int i = 0; i < n; i++){
        cout << setfill('0') << setw(5) << i + 1 << " ";
        cout << a[i].ten << " " << a[i].gt << " " << a[i].ngaysinh << " " << a[i].diachi << " ";
        cout << a[i].mathue << " " << a[i].ngayki;
        if (i != n - 1) cout << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}