#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t; cin>>t;
	while(t--)
	{
		long long ans,temp,sum,q;
		string sans;
		ans=temp=sum=0;
		int n; cin>>n;
		vector<vector<long long>> a(n+3,vector<long long> (n+1,0));
		for (int i = 1; i < n+2; ++i)
		{
			vector<long long> cnt(n+1,0);
			for (int j = 1; i < n; ++i)
			{
				cnt[a[i-1][j]]++;
			}
			for (int j = 1; i < n; ++i)
			{
				a[i][j]=cnt[a[i-1][j]];
			}
		}
		cin>>q;
		while(q--)
		{
			long long x,k; cin>>x>>k;
			if(k>n+2)
				k=n+2;
			cout<<a[k][x]<<endl;
		}
	}
	return 0;
}