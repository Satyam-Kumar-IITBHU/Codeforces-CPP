#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
		vector<long long> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];
		sort(v.begin(),v.end());
		long long ans=0;
		int r=n-1,l=n-k-1;
		while(k--)
			ans+=v[l--]/v[r--];
		for (int i = 0; i <= l; ++i)
			ans+=v[i];
		cout<<ans<<endl;
	}
	return 0;
}