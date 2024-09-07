#include <bits/stdc++.h>
using namespace std;
void Todot(string &s){
    for (char &x : s){
        if (x == '?' || x == '!') x = '.';
    }
}
void eraseFirst(vector<string>&vt){
    for (int i = 1; i < vt.size(); i++){
        vt[i].erase(vt[i].begin());
    }
}
void tolowers(string &text){
    for (char &x : text) x = tolower(x);
}
int main(){
    string word;
    string text = "";
    while (cin >> word){
        text += word;
        text.push_back(' ');//xu li dinh chu
    }
    Todot(text); //doi dau !, ? thanh dau .
    tolowers(text); //chuyen ve in thuong
    vector<string>vt; //luu cac cau
    stringstream ss(text);
    string sentence;
    while (getline(ss, sentence, '.')){ //tach cac cau bang dau cham
        vt.push_back(sentence);
    }
    vt.pop_back(); // xoa dau enter cuoi cung
    eraseFirst(vt); //xoa dau cach dau moi cau tu - xet tu cau thu 2;
    for (string &s : vt) s[0] = toupper(s[0]);
    for (int i = 0; i < vt.size() - 1; i++){
        cout << vt[i] << endl;
    }
    cout << vt.back();
}