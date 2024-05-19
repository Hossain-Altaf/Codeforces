#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){

       int n; cin>>n;
       vector<int>a(n),b(n-1),c(n-2);
       for(int i=0; i<n; i++) cin>>a[i];
       for(int i=0; i<n-1; i++) cin>>b[i];
       for(int i=0; i<n-2; i++) cin>>c[i];

       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       sort(c.begin(),c.end());

       vector<int>d;
       set_difference(a.begin(),a.end(),b.begin(),b.end(),back_inserter(d));
       cout<<d[0]<<'\n';

       vector<int>e;
       set_difference(b.begin(),b.end(),c.begin(),c.end(),back_inserter(e));
       cout<<e[0]<<'\n';


       return 0;
}


