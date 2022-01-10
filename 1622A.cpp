#include<bits/stdc++.h>
using namespace std;

bool TF()
{
	vector<long long> v(3);
		for (int i = 0; i < 3; ++i)
			cin>>v[i];
		sort(v.begin(), v.end());
		if(v[0]==v[1] && v[2]%2==0)
		{
			return true;
		}
		if(v[1]==v[2] && v[0]%2==0)
		{
			return true;
		}
		if(v[2]==v[1]+v[0])
		{
			return true;
		}
		return false;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		if(TF())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}