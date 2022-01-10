#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int s=0;
		for(int i=0;i<n;i++)
		{
			int x; cin>>x;
			s+=x;
		}
		if(s%n==0)
			cout<<0<<endl;
		else
			cout<<1<<endl;
	}
	return 0;
}