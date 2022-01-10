#include <iostream>
#include <algorithm>
#include"unordered_map"
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")
#define int long long
#define lld long double
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define setbits(X) __builtin_popcountll(X)
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define pi 3.141592653589793238
#define fix(X) fixed << setprecision(X)
#define all(X) (X).begin(), (X).end()
#define endl "\n"
#define MOD 1000000007
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Sanskar cout.tie(NULL);
#define cint(n) int n;cin>>n;
#define cinarray(n) int a[n];fl(i,n)cin>>a[i];
using namespace std;
int gcd(int a, int b){if (b == 0)return a;return gcd(b, a % b);}
int lcm(int a, int b){return ((a/gcd(a,b))*b);}
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
void printarr(int arr[], int n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
string decToBinary(int n){string s="";for (int i = 31; i >= 0; i--) {int k = n >> i;if (k & 1)s.pb('1');else s.pb('0');}return s;}
int binaryToDecimal(string n){string num = n;int dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(int x){if (x >= 0) {int sr = sqrt(x);return (sr * sr == x);}return false;}
int moduloMultiplication(int a,int b,int mod){a%=mod;b%=mod;return (a*b)%mod;}
int powermod(int x, int y, int p){int res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
vector<int> primees(10000000,1);vector<int> anses(10000000,0);
void isPrimes(){int c=0;for (int p = 2; p * p <= 10000000; p++)if (primees[p] == 1)for (int i = p * 2; i <= 10000000; i += p){primees[i] = 0;}for (int p = 2; p <= 10000000; p++){anses[p]=anses[p-1]+primees[p];}}
//Code by Sanskar Singh
//Language C++
//Practice ===>> Success
int productOfSubsetSums(int arr[], int n,int mod)
{
    int ans = 1;
    for (int i = 0; i < n; ++i )
        ans = ((ans%mod) * ((arr[i] + 1)%mod))%mod;
    return ans-1;
}
int countSC(int N)
{
 int res = (int)sqrt(N) + (int)cbrt(N)
              - (int)(sqrt(cbrt(N)));
 
    return res;
}
   const int n=2e5+1;
int arr[n][19];
void pre(int a,int b){
    fl(i,19)
        arr[0][i]=0;
        for(int i=1;i<n;i++){
            int j = 0;
        int x = i;
        while(x>0)
        {
            arr[i][j] = x%2 + arr[i-1][j];
            x/=2;
            j++;
        }
        }
        // fl(i,n){
        //     fl(j,19){
        //         cout<<arr[i][j];
        //     }
        //     cout<<endl;
        // }
}
void main_part()
{
    int cnt=0;
    cint(a)cint(b)
    int m=(long long)INT_MIN;
    fl(i,19){
        m=max(m,arr[b][i]-arr[a-1][i]);
    }    
    cout<<b-a+1-m<<endl;
    
}
int main()
{
    Code By Sanskar //COOL
    int t;
    cin>>t;
    pre(1,n);
    while(t-->0)
    {
        main_part();
    }
 
}
 