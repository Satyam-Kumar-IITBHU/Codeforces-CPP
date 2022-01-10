#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string a,b; cin>>a>>b;
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			if(b[i-1]=='1' && (a[i-1]=='0'||a[i-2]=='1'))
				ans++;
			else if(b[i-1]=='1'&&a[i]=='1')
			{
				ans++;
				a[i]='2';
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}