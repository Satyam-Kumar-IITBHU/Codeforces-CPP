#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		long long a[n];
		long long sum=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum+=a[i];
		}
		long long res=sum/n;
		if(res*n!=sum)
			res+=1;
		cout<<res<<endl;
	}
}