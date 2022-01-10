#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#include<stack>
using namespace std;
typedef long long ll;
ll solve(ll a,ll b){
	ll ans=0,x,y,t=1;
	while(b>0){
		x=a%10;
		y=b%10;
		a/=10;
		b/=10;
		if(x<=y){
			ans+=t*(y-x);
		}
		else if(b%10==1){
			b/=10;
			ans+=t*(10+y-x);
		}
		else{
			return -1;
		}
		t*=10;
	}
	if(a==0) return ans;
	else return -1;
}
int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	ll a,b;
	while(t--){
		cin>>a>>b;
		cout<<solve(a,b)<<endl;
	}
 
 
	return 0;
}