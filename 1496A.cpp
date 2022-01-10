#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    long long a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int  cnt=0;
    for(int i=0;i<a/2;i++)
    {
      if(s[i]!=s[a-1-i])
      {
        break;
      }
      cnt++;
    }
    if(b<=cnt && 2*b<a)
      cout<<"YES\n";
    else 
      cout<<"NO\n";

  }
}
