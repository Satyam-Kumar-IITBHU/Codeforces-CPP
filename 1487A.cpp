#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		int j=0;
		sort(v.begin(), v.end());
		cout<<n-count(v.begin(), v.end(),v[0])<<endl;
	}
	return 0;
}