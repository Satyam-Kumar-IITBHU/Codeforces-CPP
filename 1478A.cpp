#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n+1];
        for(int i=0;i<n+1;i++){
            b[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        
        cout<<*max_element(b,b+n+1)<<endl;
    }
    
}