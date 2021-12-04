#include<bits/stdc++.h>
using namespace std;
int main() {
    char s[20];
    cin >> s;
    int n;
    cin >> n;
    int len = strlen(s);
    int sum = 0, b[100] = {
        0
    },
    k = 0;
    char a[n][20];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < len; j++) {
            if (a[i][j] == s[j] || s[j] == '*') {
                continue;
            }
            else {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            sum++;
            b[k++] = i;
        }
    }
    cout << sum << endl;
    for (int i = 0; i < k; i++) {
        cout << a[b[i]] << endl;
    }
    return 0;
}
