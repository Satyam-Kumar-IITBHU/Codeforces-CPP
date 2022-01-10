#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d; cin>>a>>b>>c>>d;
	int x,y;
	x=min(a,min(c,d));
	a=a-x;
	y=min(a,b);
	cout<<((256*x)+(32*y))<<endl;

}