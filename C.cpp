#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        printf("%d/%d = %d", a, b, a / b);
        int sum = 0;
        if (a % b != 0) {
            cout << "+1/";
            a = a % b;
            int k = __gcd(a, b);
            a /= k, b /= k;
            if (a != 1) {
                cout << "{";
            }
            while (a > 1) {
                int x = b, y = a;
                cout << x / y << "+1/";
                sum++;
                a = x % y;
                b = y;
                int k = __gcd(a, b);
                a /= k, b /= k;
                if (a != 1) {
                    cout << "{";
                }
            }
            cout << b;
            for (int i = 0; i < sum; i++) {
                cout << "}";
            }
        }
        cout << "\n";
    }
    return 0;
}

