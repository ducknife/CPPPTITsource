#include <bits/stdc++.h>
using namespace std;
void rutgon(string &s);
class GiangVien{
private:
    string ten, bomon;
    int id;
public:
    void setID(int i){
        this->id = i;
    }
    void nhap(){
        getline(cin >> ws, ten);
        getline(cin, bomon);
        rutgon(bomon);
    }
    void in(){
        cout << "GV" << setfill('0') << setw(2) << id << " ";
        cout << ten << " " << bomon << endl;
    }
    string getBOMON(){
        return this->bomon;
    }
};
void rutgon(string &s){
    string res = "";
    for (char &x : s) x = tolower(x);
    stringstream ss(s);
    string word;
    while (ss >> word){
        word[0] = toupper(word[0]);
        res += word[0];
    }
    s = res;
}
int main(){
    int n; cin >> n;
    vector<GiangVien>v;
    for (int i = 0; i < n; i++){
        GiangVien x; x.nhap();
        x.setID(i + 1);
        v.push_back(x);
    }
    int q; cin >> q;
    string s;
    while (q--){
        getline(cin >> ws, s);
        rutgon(s);
        cout << "DANH SACH GIANG VIEN BO MON " << s << ":" << endl;
        for (int i = 0; i < n; i++){
            if (v[i].getBOMON() == s){
                v[i].in();
            }
        }
    }
}