#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	int x = 0,y = 0,ansx = 0,ansy = 0;
	for(int i=0;i<=n/4;i++){
		x = i,y = (n - 4 * x) / 7;
		if(x * 4 + y * 7 == n && x >= 0 && y >= 0){
			if(ansx == 0 && ansy == 0 || ansx + ansy > x + y)ansx = x,ansy = y;
		}
	}
	if(ansx == 0 && ansy == 0)cout << "YingYingYing";
	else {
		for(int i=0;i<ansx;i++)cout << 4;
		for(int i=0;i<ansy;i++)cout << 7;
	}
	return 0;
}
