#include<bits/stdc++.h>
using namespace std;
using LL = long long;
const int maxn = 1e6+10;
LL a[maxn];
LL s1, s2, n;
bool judge(LL mid){
	for(int i=mid;i<=n;i++){
		if(a[i] - a[i - mid] >= s1 + s2)return true;
	}
	return false;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	a[0] = 0;
	while(cin >> n) {
		cin >> s1 >> s2;
		for(int i=1; i <= n; i++){
			cin >> a[i];
			a[i] += a[i-1];
		}
		if(a[n] < s1 + s2){
			cout << n << "\n";
			continue;
		}
		LL l = 1, r = n,ans = n;
		LL mid;
		while(l <= r){
			mid = (l + r) >> 1;
			if(judge(mid)) {
				ans = min(ans, mid);
				r = mid - 1;
			}
			else l = mid + 1;
		}
		cout << n - ans << "\n";
	}
	
	return 0;
}
