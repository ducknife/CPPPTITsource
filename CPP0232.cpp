#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<vector<bool>>& mat) {
    int R = mat.size();
    int C = mat[0].size();
    vector<vector<int>> hist(R, vector<int>(C, 0));
    for (int i = 0; i < C; i++) {
        hist[0][i] = mat[0][i];
        for (int j = 1; j < R; j++)
            hist[j][i] = (mat[j][i] == 0) ? 0 : hist[j - 1][i] + 1;
    }
    for (int i = 0; i < R; i++) {
        vector<int> count(R + 1, 0);
        for (int j = 0; j < C; j++)
            count[hist[i][j]]++;
        int col_no = 0;
        for (int j = R; j >= 0; j--) {
            if (count[j] > 0) {
                for (int k = 0; k < count[j]; k++) {
                    hist[i][col_no] = j;
                    col_no++;
                }
            }
        }
    }
    int curr_area, max_area = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            curr_area = (j + 1) * hist[i][j];
            max_area = max(max_area, curr_area);
        }
    }
    return max_area;
}
int main() {
    int t; cin >> t;
    while (t--){
        vector<vector<bool>> mat;
        int n, m; cin >> n >> m;
        for (int i = 0; i < n; i++){
            vector<bool> tmp;
            for (int j = 0; j < m; j++){
                bool x; cin >> x;
                tmp.push_back(x);
            }
            mat.push_back(tmp);
        }
        cout << maxArea(mat) << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<vector<bool>>& mat) {
    int R = mat.size();
    int C = mat[0].size();
    vector<vector<int>> hist(R, vector<int>(C, 0));
    for (int i = 0; i < C; i++) {
        hist[0][i] = mat[0][i];
        for (int j = 1; j < R; j++)
            hist[j][i] = (mat[j][i] == 0) ? 0 : hist[j - 1][i] + 1;
    }
    for (int i = 0; i < R; i++) {
        vector<int> count(R + 1, 0);
        for (int j = 0; j < C; j++)
            count[hist[i][j]]++;
        int col_no = 0;
        for (int j = R; j >= 0; j--) {
            if (count[j] > 0) {
                for (int k = 0; k < count[j]; k++) {
                    hist[i][col_no] = j;
                    col_no++;
                }
            }
        }
    }
    int curr_area, max_area = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            curr_area = (j + 1) * hist[i][j];
            max_area = max(max_area, curr_area);
        }
    }
    return max_area;
}
int main() {
    int t; cin >> t;
    while (t--){
        vector<vector<bool>> mat;
        int n, m; cin >> n >> m;
        for (int i = 0; i < n; i++){
            vector<bool> tmp;
            for (int j = 0; j < m; j++){
                bool x; cin >> x;
                tmp.push_back(x);
            }
            mat.push_back(tmp);
        }
        cout << maxArea(mat) << endl;
    }
    return 0;
}
