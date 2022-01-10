#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    	cin>>a[i];
	    int ans=1;
	    if(a[0]==1)
	    ans++;
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]==0 && a[i-1]==0)
	        {
	           ans=-1;
	           break;
	        }
	        else if(a[i]==1 && a[i-1]==1)
	        ans+=5;
	         else if(a[i]==1 && a[i-1]==0)
	        ans+=1;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}