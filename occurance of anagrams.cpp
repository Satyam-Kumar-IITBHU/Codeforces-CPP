#include<bits/stdc++.h>
using namespace std;

bool anagram(string x,string y)
{
	map<char,int> m;
	for (int i = 0; i < x.length(); ++i)
	{
		m[x[i]]++;
	}
	for (int i = 0; i < y.length(); ++i)
	{
		m[y[i]]--;
	}
	for(auto it=m.begin();it!=m.end();it++)
	{
		if(it->second!=0)
			return false;
	}
	return true;
}

int countA(string a, string b)
{
	int ans=0;
	for (int i = 0; i < a.length()-b.length()+1; ++i)
	{
		if (anagram(a.substr(i,b.length()),b))
		{
			ans++;
		}
	}
	return ans;
}
 
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string a,b; cin>>a>>b;
		cout<<countA(a,b);
	}
	return 0;
}