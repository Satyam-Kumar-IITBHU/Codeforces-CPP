#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--){
	 int n,a,b;
	 cin>>n>>a>>b;
	 if(a>n/2+1||b<n/2||(a<=n/2&&b<=n/2)||(a>n/2&&b>n/2)){
	     cout<<"-1"<<endl;
	     continue;
	 }
	 cout<<a<<" ";
	 for(int i=n/2+1;i<=n;i++)
	 if(i!=a&&i!=b)
      cout<<i<<" ";
     for(int i=1;i<=n/2;i++)
     if(i!=a&&i!=b)
      cout<<i<<" ";
      cout<<b<<" "<<endl;
	}
	return 0;
}