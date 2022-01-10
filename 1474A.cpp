  #include<bits/stdc++.h>
using namespace std;
int main()

  {
  int tc;
    cin>>tc;
    while(tc--)
    {
       int n,i;
       cin>>n;
 
       string s,ans;
 
       cin>>s;
 
       ans="1";
 
       int prev=s[0]-'0';
       prev++;
       for(i=1;i<n;i++)
       {
           ;
           int x=s[i]-'0';
           int y=ans[i-1]-'0';
 
           if(x+1==prev)
           {
               ans+='0';
               prev=x+0;
           }
           else
           {
               ans+='1';
               prev=x+1;
           }
       }
 
       cout<<ans<<endl;
    }
    return 0;
}