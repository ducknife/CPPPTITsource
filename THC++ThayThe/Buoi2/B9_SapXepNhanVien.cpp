#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int cnt = 1;
struct NhanVien{
    string name, sex, bir, add, tax, date;
    int day, month, year;
    string id;
};
void nhap(NhanVien &x){
    getline(cin >> ws, x.name);
    getline(cin, x.sex);
    getline(cin, x.bir);
    getline(cin, x.add);
    getline(cin, x.tax);
    getline(cin, x.date);
    x.day = stoi(x.bir.substr(3, 2));
    x.month = stoi(x.bir.substr(0, 2));
    x.year = stoi(x.bir.substr(6, 4));
    if (cnt < 10) x.id = "0000" + to_string(cnt++);
    else x.id = "000" + to_string(cnt++);
}
bool cmp(NhanVien a, NhanVien b){
    if (a.year == b.year){
        if (a.month == b.month) return a.day < b.day;
        return a.month < b.month;
    }
    return a.year < b.year;
}
void sapxep(NhanVien a[], int n){
    sort(a, a + n, cmp);
}
void inds(NhanVien a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i].id << " " << a[i].name << " " << a[i].sex << " " << a[i].bir << " " << a[i].add << " " << a[i].tax << " " << a[i].date << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}