#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,max_e = 0,count = 0;
        cin>>n;
        long long int a[n];
        for(int i = 0 ; i < n ; i++)
        {
             cin>>a[i];
        }
        max_e = *max_element(a,a+n);
        long long d = a[n-1];
        for(int i = n-1 ; i >=0 ; i--)
        {
            if(a[i] == max_e)
            {
                 break;
            }
            else
            {
 
                if(i == n-1)
                {
                    count ++;
                    continue;
                }
                else if(a[i] >d)
                {
                    d = a[i];
                    // cout<<a[i]<<endl;
                    // cout<<count<<endl;
                    count ++;
                    // cout<<count<<endl;
                }
            }
        }
        cout<<count<<endl;
    }
}