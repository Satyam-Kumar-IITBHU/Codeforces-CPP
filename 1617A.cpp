#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s,t; cin>>s>>t;
		int n=s.size();
		sort(s.begin(),s.end());
		string ans="";
		int a=count(s.begin(),s.end(),'a');
		int b=count(s.begin(),s.end(),'b');
		int c=count(s.begin(),s.end(),'c');
		if(t=="abc" && a && b && c)
		{
			for(int i=0;i<a;i++)
				ans+='a';
			for (int i = 0; i < c; ++i)
			{
				ans+='c';
			}
			for (int i = 0; i < b; ++i)
			{
				ans+='b';
			}
			for (int i = (a+b+c); i < n; ++i)
			{
				ans+=s[i];
			}
			cout<<ans<<endl;
		}
		else
			cout<<s<<endl;
	}
	return 0;
}