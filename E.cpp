#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << "[";
        for (int i = 0; i < 100; i++) {
            if (i < n)
                cout << ">";
            else
                cout << " ";
        }
        cout << "]";
        if (n < 10) {
            cout << "0" << n << "%" << endl;
        } else {
            cout << n << "%" << endl;
        }
    }
    return 0;
}
