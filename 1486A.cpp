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
		long long sum=0, need=0;
		bool f=1;
		for (int i = 0; i < n; ++i)
			{
				need+=i;
				sum+=v[i];
				if(sum<need)
				{
					f=0;
					break;
				}
			}
		if(f)	
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}