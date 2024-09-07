#include <bits/stdc++.h>
using namespace std;
int main(){
    fstream in;
    in.open("VANBAN.in", ios::in);
    if (in.is_open()){
        string word;
        set<string>se;
        while (in >> word){
            for (char &x : word) x = tolower(x);
            se.insert(word);
        }
        for (auto it : se) cout << it << endl;
    }
    in.close();
}