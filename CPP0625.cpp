#include <bits/stdc++.h>
using namespace std;
class GV{
    private:
        string ten, khoa, tencuoi;
        int id;
    public:
        void setID(int id){
            this->id = id;
        }
        void nhap(){
            getline(cin >> ws, ten);
            getline(cin, khoa);
            rutgon(khoa);
            tencuoi = getten(ten);
        }
        void in(){
            cout << "GV" << setfill('0') << setw(2) << id << " ";
            cout << ten << " " << khoa << endl;
        }
        string getTen(){
            return tencuoi;
        }
        int getMa(){
            return id;
        }
        void rutgon(string &);
        string getten(string&);
};
string GV::getten(string &s){
    vector<string>v;
    stringstream ss(s);
    string word;
    while (ss >> word){
        v.push_back(word);
    }
    return v.back();
}
void GV::rutgon(string &s){
    string res = "";
    vector<string>v;
    stringstream ss(s);
    string word;
    while (ss >> word){
        res += toupper(word[0]);
    }
    s = res;
}
bool cmp(GV a, GV b){
    if (a.getTen() == b.getTen()) return a.getMa() < b.getMa();
    else return a.getTen() < b.getTen();
}
int main(){
    int n; cin >> n;
    vector<GV>v;
    for (int i = 0; i < n; i++){
        GV x; x.nhap();
        x.setID(i + 1);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v) i.in();
} 