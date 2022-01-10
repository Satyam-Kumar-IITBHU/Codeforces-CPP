#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, q; cin >> n >> q;
	int a[n];
	int zero = 0, ones = 0;
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
		ones += (a[i] == 1);
		zero += (a[i] == 0);
	}
 
	for (int i = 0; i < q; i++) 
	{
		int type; cin >> type;
		if (type == 1) 
		{
			int idx; cin >> idx;
			idx--;
			if (a[idx] == 1) 
			{
				ones--;
				zero++;
				a[idx] = 0;
			}
			else 
			{
				ones++;
				zero--;
				a[idx] = 1;
			}
		}
		else 
		{
			int k; cin >> k;
			if (k <= ones)
				cout << 1;
			else
				cout << 0;
			cout << endl;
		}
	}
	return 0;
}
