#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long n; cin>>n;
	string s; cin>>s;
	if(n==1)
	{
		cout<<s[0]<<s[0]<<endl;
		return;
	}
	if(s[0]==s[1])
	{
		cout<<s[0]<<s[0]<<endl;
		return;
	}
	long long cnt=1;
	for (int i = 1; i < n; ++i)
	{
		if(s[i-1]>=s[i])
			cnt++;
		else
			break;
	}
	string ans=s.substr(0,cnt);
	cout<<ans;
	reverse(ans.begin(), ans.end());
	cout<<ans<<endl;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}