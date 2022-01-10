#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n; 
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			/* code */cin>>v[i];
		}
		int x=*min_element(v.begin(), v.end());
		int y=*max_element(v.begin(), v.end());
		cout<<y-x<<endl;
	}
	return 0;
}