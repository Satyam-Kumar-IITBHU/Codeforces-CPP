#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int x,y; cin>>x>>y;
		string s; cin>>s;
		int l=count(s.begin(), s.end(),'L');
		int r=count(s.begin(), s.end(),'R');
		int u=count(s.begin(), s.end(),'U');
		int d=count(s.begin(), s.end(),'D');
		bool f=1;
		
		if(y<0 && abs(y)>d)
			f=0;
		if(y>0 && y>u)
			f=0;
		if(x<0 && abs(x)>l)
			f=0;
		if(x>0 && x>r)
			f=0;

		if(f)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}