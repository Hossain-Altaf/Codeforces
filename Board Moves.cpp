#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int ans=0;
    for(int i=1; i<=n/2; i++){
        ans+=i*i;
    }
    cout<<ans*8<<'\n';
    }
    return 0;
}



