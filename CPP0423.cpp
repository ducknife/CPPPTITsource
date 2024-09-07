#include <bits/stdc++.h>
using namespace std;
//sliding window;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[n], cnt = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] <= k) cnt++; //dem phan tu <= k;
        }
        int cnt2 = 0;
        for (int i = 0; i < cnt; i++){//duyet cua so dau tien;
            if (a[i] <= k) cnt2++;
        }
        int res = cnt2;
        for (int i = cnt; i < n; i++){ //cac cua so con lai
            if (a[i - cnt] <= k) --cnt2;//neu phan tu vua loai khoi cua so <= k -> --dem;
            if (a[i] <= k) cnt2++;//neu phan tu vua them <= k thi ++dem;
            res = max(res, cnt2); //cap nhat res;
        }
        //so phep hoan vi = (so phan tu <= k) - (so phan tu <= k lon nhat trong cac cua so);
        cout << cnt - res << endl;
    }
}