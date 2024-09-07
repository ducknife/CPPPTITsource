#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream in;
    long long sum = 0;
    in.open("DATA.in", ios::in);
    if (in.is_open()){
        string s;
        string tmp = "";
        while (in >> s){
            tmp += s;
            tmp += " ";
        }
        tmp.pop_back();
        for (char &x : tmp){
            if (!isdigit(x)) x = ' ';
        }
        stringstream ss(tmp);
        string num;
        while (ss >> num){
            if (num.size() == to_string(INT_MAX).size()){
                if (num < to_string(INT_MAX)) sum += stoi(num);
            } 
            else if (num.size() < to_string(INT_MAX).size()) sum += stoi(num);
        }
        cout << sum;
    }   
    in.close();
}