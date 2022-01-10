#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,rb,cb,rd,cd;
	    cin >> n >> m >> rb >> cb >> rd >> cd;
	    int a = 0, b = 0;
	    if(rb<=rd)
	        a = rd-rb;
	    else
	        a = (2*n)-rb-rd;
	    
	    if(cb<=cd)
	        b = cd-cb;
	    else
	        b = (2*m)-cd-cb;
	    
	    cout << min(a,b) << endl;
    }
    return 0;
}