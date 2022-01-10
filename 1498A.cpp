#include <bits/stdc++.h>
using namespace std;
long long gcdsum(long long sum)
{
	long long num=sum;
	long long ret=0;
	while(num>0)
	{
		ret+=num%10;
		num/=10;
	}
	long long ans=__gcd(sum,ret);
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		long long n; cin>>n;
		for(int i=0;i<n;i++)
		{
			if(gcdsum(n)<=1)
				n++;
			else
				break;
		}
		cout<<n<<endl;
	}
	return 0;
}