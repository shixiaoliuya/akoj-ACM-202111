#include<bits/stdc++.h>
using namespace std;
using LL = long long;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	stack<int>s;
	while(n > 0){
		if(n % 3 == 1)s.push(2);
		else if(n % 3 == 2)s.push(3);
		else s.push(6);
		n--;
		n /= 3;
	}
	while(!s.empty()){
		cout << s.top();
		s.pop();
	}
	
	return 0;
}
