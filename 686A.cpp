#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,x; cin>>n>>x;
	long long cnt=0;
	while(n--)
	{
		char c; cin>>c;
		long long d; cin>>d;
		if(c=='+')
			x+=d;
		else
		{
			if(x>=d )
				x-=d;
			else
				cnt++;
		}
	}
	cout<<x<<" "<<cnt<<endl;
}