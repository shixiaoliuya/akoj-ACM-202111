#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		set <int, greater<int>> s;
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int x;
			scanf("%d", &x);
			s.insert(x);
		}
		int op;
		scanf("%d", &op);
		int cnt = 1;
		for(auto &i:s){
			if(cnt == op) {
				printf("%d\n",i);
				break;
			}
			cnt++;
		}
	}
	
	return 0;
}
