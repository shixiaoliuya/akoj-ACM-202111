#include<bits/stdc++.h>
using namespace std;
int n, a[1000], flag, l;
void dfs(int x, int sum) {
    if (x == n) {
        if (sum == l / 2) {
            flag = 1;
        }
        return;
    }
    dfs(x + 1, sum + a[x]);
    dfs(x + 1, sum);
}
int main() {
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        l = 0;
        for (int i = 0; i < n; i++) {
            l += a[i];
        }
        if (l % 2 != 0) {
            cout << "Sorry,I can't!\n";
        }
        else {
            flag = 0;
            dfs(0, 0);
            if (flag == 1) {
                cout << "Of course,I can!" << endl;
            }
            else if (flag == 0) {
                cout << "Sorry,I can't!\n";
            }
        }
    }
    return 0;
}
