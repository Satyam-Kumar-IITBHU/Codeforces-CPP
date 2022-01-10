#include<bits/stdc++.h>
using namespace std;
 
 void solve()
 {
 		int n; cin>>n;
 		int a[n];
 		unordered_map<int,int> m;
 		for (int i = 0; i < n; ++i)
 		{
 			cin>>a[i];
 			if(m.find(a[i])==m.end())
 				m[a[i]]=1;
 			else
 				m[a[i]]+=1;
 		}
 		int mn=INT_MAX;
 		for(auto v:m)
 		{
 			if(v.second==1)
 				mn=min(mn,v.first);
 		}
 		if(mn==INT_MAX)
 		{
 			cout<<-1<<endl;
 			return;
 		}
 		else
 		{
 			for (int i = 0; i < n; ++i)
 			{
 				if (a[i]==mn)
 				{
 					cout<<i+1<<endl;
 					return;
 				}
 			}
 		}

 }
int main()
{
	int t; cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}