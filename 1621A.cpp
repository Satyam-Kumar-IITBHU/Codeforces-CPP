#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k;
    cin>>n>>k;
    if((n+1)/2<k)
    {
	 	cout<<"-1"<<endl; 
		return;
    }
	for(int i=0; i<n; i++)
    {
    	if(i%2 == 0)
        {
	        for(int j=0; j<n; j++)
            {
                if(i==j && k>0)
                {
                    cout<<"R";
                    k--;
                }
                else 
                	cout<<".";
            }
                cout<<endl;
        }
        else if(i%2)
        {
            for(int j=0; j<n; j++)
            {
                cout<<".";
            }
                cout<<endl;
            }
    }
        return;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}