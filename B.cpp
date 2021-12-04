#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i&1){
				if(j&1)cout<<"0";
				else cout<<"1";
			}else{
				if(j&1)cout<<"1";
				else cout<<"0";
			}
		}
		cout<<endl;
	}
	
	return 0;
} 
