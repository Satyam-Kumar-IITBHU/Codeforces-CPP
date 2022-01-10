#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector<long long> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		long long a=v[0],b=v[1];
		for (int i = 0; i < n; ++i)
		{
			if(i%2==0)
				a=__gcd(a,v[i]);
			else
				b=__gcd(b,v[i]);
		}
		bool ok1=true;
		bool ok2=true;
		for (int i = 0; i < n; ++i)
		{
			if(i%2==0 && v[i]%b==0)
				ok1=false;
			if(i%2!=0 && v[i]%a==0)
				ok2=false;
		}
		if(ok1)
			cout<<b<<endl;
		else if(ok2)
			cout<<a<<endl;
		else
			cout<<0<<endl;

	}
	return 0;
}