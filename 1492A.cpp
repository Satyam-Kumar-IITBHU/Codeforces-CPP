#include <bits/stdc++.h>
using namespace std; 
void solve()
{
    long long p, a, b, c;
    cin >> p >> a >> b >> c;
    long long x = p % a, y = p % b, z = p % c;
    long long ans[3] = {a - x, b - y, c - z};
    if (ans[0] == a)
    {
        ans[0] = 0;
    }
    if (ans[1] == b)
    {
        ans[1] = 0;
    }
    if (ans[2] == c)
    {
        ans[2] = 0;
    }
    sort(ans, ans + 3);
    cout << abs(ans[0]) << "\n";
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}