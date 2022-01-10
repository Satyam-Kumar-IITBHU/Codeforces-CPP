#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		long long int n,x; cin>>n>>x;
		vector<long long int> v(n);
		long long int mn=0,mx=0;
		for (int i = 0; i < n; ++i)
		{
			/* code */cin>>v[i];
		}
		for (int i = 0; i < n; ++i)
		{
			mn=mn+v[i];
			mx=mx+((v[i]+x-1)/x);
		}
		cout<<((mn+x-1)/x)<<" "<<mx<<endl;
	}
	return 0;
}