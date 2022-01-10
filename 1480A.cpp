#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		int i=0;
		while(i<s.size())
		{
			if(i%2==0)
			{
				if(s[i]=='a')
					s[i]='b';
				else
					s[i]='a';
			}
			else
			{
				if(s[i]=='z')
					s[i]='y';
				else
					s[i]='z';
			}
			++i;
		}
		cout<<s<<endl;
	}
	// cout<<"YES";
}