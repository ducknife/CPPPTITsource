#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string nganh, ma, ten, lop, email;
    public:
        void nhap(){
            getline(cin >> ws, ma);
            getline(cin, ten);
            getline(cin, lop);
            getline(cin, email);
            nganh = ma.substr(3, 4);
        }
        void in(){
            cout << ma << " " << ten << " " << lop << " " << email << endl;
        }
        string GetMajor(){
            return nganh;
        }
        string getClass(){
            return lop;
        }
};
void StoDCS(string &s){
    string res = "DC";
    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word){
        res += word[0];
        cnt++;
        if (cnt == 2) break;
    }
    s = res;
}
int main(){
    int n; cin >> n;
    vector<SinhVien>v;
    for (int i = 0; i < n; i++){
        SinhVien x; x.nhap();
        v.push_back(x);
    }
    int q; cin >> q;
    while (q--){
        string s; getline(cin >> ws, s);
        for (char &x : s){
            if (isalpha(x)) x = toupper(x);
        }
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        StoDCS(s);
        for (int i = 0; i < v.size(); i++){
            if (v[i].getClass()[0] != 'E'){
                if (v[i].GetMajor() == s) v[i].in();
            }
        }
    }
}