#include<bits/stdc++.h>
using namespace std;

void solve()
{
 
    int n;
    cin >> n;
    int arr[n];
    vector<int> v(101);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        v[arr[i]]++;
    }
 
    for (int i = 0; i <= 100; i++)
    {
        if (v[i] > 0)
        {
            cout << i << " ";
            v[i]--;
        }
    }
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j < v[i]; j++)
        {
            cout << i << " ";
        }
    }
 
    cout << endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
}