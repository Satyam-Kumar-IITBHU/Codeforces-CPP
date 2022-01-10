#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector<string> s(n-2);
		for(int i=0;i<n-2;++i)
			cin>>s[i];
		string ans=s[0];
		for (int i = 0; i < n-3; ++i)
		{
			if(s[i][1]!=s[i+1][0])
				ans+=s[i+1][0];
			ans+=s[i+1][1];
		}
		if(ans.size()!=n)
			cout<<'a';
		cout<<ans<<endl;
	}
	return 0;
}