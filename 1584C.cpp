#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector<int> a(n) ,b(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			/* code */cin>>b[i];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		bool ok = 1;
        for (int i = 0; i < n; ++i) 
        {
            if (a[i] != b[i] && a[i] + 1 != b[i])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}