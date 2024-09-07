#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream in1, in2;
    in1.open("DATA1.in", ios::in);
    in2.open("DATA2.in", ios::in);
    if (in1.is_open() && in2.is_open()){
        map<string, int>mp;
        set<string>hop, giao;
        string s1, s2;
        while (in1 >> s1){
            for (char &x : s1) x = tolower(x);
            mp[s1] = 1;
            hop.insert(s1);
        }
        while (in2 >> s2){
            for (char &x : s2) x = tolower(x);
            if (mp[s2] == 1) giao.insert(s2);
            else hop.insert(s2);
        }
        for (auto i : hop) cout << i << " ";
        cout << endl;
        for (auto i : giao) cout << i << " ";
    }
    in1.close();
    in2.close();
}