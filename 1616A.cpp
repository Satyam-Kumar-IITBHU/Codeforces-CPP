#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		set<int> s;
		for (int i = 0; i < n; ++i)
		{
			int x; cin>>x;
			int sz=s.size();
			s.insert(x);
			if(sz==s.size())
				x*=-1;
			s.insert(x);
		}
		cout<<s.size()<<endl;
	}
	return 0;
}