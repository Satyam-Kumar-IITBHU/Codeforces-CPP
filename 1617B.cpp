#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		if(n%2==0)
			cout<<n-3<<" "<<2<<" "<<1<<endl;
		else
		{
			n-=1;
			for(int i=2;i<n-1;i++)
			{
				if(__gcd(i,n-i)==1)
					{
						cout<<i<<" "<<n-i<<" "<<1<<endl;
						break;
					}
			}
		}
	}
	return 0;
}