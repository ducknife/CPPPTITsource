#include <bits/stdc++.h>
using namespace std;
int NLP1(string s){
    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] >= s[i + 1]) return 0;
    }
    return 1;
}
int NLP2(string s){
    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] != s[i + 1]) return 0;
    }
    return 1;
}
int NLP3(string s){
    if (s[0] == s[1] && s[1] == s[2] && s[2] != s[3] && s[3] == s[4]) return 1;
    return 0;
}
int NLP4(string s){
    for (char x : s){
        if (x != '6' && x != '8') return 0;
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while (t--){
        string plate; getline(cin >> ws, plate);
        string res = "";
        for (int i = 5; i < plate.size(); i++){
            if (isdigit(plate[i])) res.push_back(plate[i]);
        }
        if (NLP1(res) || NLP2(res) || NLP3(res) || NLP4(res)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}