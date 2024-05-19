#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;  cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int>a(n);
        int c=1;
        for(int i=0; i<n; i++){
            cin>>a[i];

        }
        sort(a.begin(),a.end());
        int ans=1;
        for(int i=1; i<n; i++){
            if((a[i]-a[i-1])>k){
                c=1;
            }
            else{
                c++;
            }

            ans=max(ans,c);
        }
        cout<<n-ans<<'\n';

    }
}


