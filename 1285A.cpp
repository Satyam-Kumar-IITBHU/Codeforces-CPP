#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	string s; cin>>s;
	cout<<(count(s.begin(),s.end(),'L')+count(s.begin(),s.end(),'R')+1)<<endl;
}