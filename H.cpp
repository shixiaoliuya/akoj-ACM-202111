#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n,i,j;
	string a,b,c;
	cin>>n;
	while (n--)
	{
		cin>>a;
		c=a;
		for (i=0;i<a.size();i++)
		{
			for (j=i+1;j<a.size();j++)
			{
				b=a;
				if (b[i]<b[j]) swap(b[i],b[j]);
				if(c<b)	c=b;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}
