#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
class GiangVien{
    private:
        string id, name, major, lastname;
    public:
        void setID(int id){
            if (id < 10) this->id = "GV0" + to_string(id);
            else this->id = "GV" + to_string(id); 
        }
        static void standMajor(string &s){
            string res = "";
            string word;
            stringstream ss(s);
            while (ss >> word){
                word[0] = toupper(word[0]);
                res.push_back(word[0]);
            }
            s = res;
        }
        void input(){
            getline(cin >> ws, name);
            getline(cin, major);
            stringstream ss(name);
            string word;
            vector<string> v;
            while (ss >> word){
                v.push_back(word);
            }
            lastname = v.back();
            standMajor(major);
        }
        void output(){
            cout << id << " " << name << " " << major << endl;
        }
        string getID(){
            return id;
        }
        string getLastName(){
            return lastname;
        }
};
bool cmp(GiangVien a, GiangVien b){
    if (a.getLastName() == b.getLastName()) return a.getID() < b.getID();
    return a.getLastName() < b.getLastName();
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<GiangVien>v;
    for (int i = 1; i <= n; i++){
        GiangVien x; x.input();
        x.setID(i);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++){
        v[i].output();
    }
    return 0;
}