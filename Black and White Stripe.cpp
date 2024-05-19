#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define mikasa ios::sync_with_stdio(false) cin.tie(NULL)

int32_t main(){
       //mikasa;

      int t; cin>>t;
      while(t--){
           int n,k; cin>>n>>k;
           string s; cin>>s;
           int c=0,a=0;
           for(int i=0; i<k; i++){
              if(s[i]=='W'){
                c++;
              }
           }
           a=c;
           for(int i=k; i<n; i++){
            if(s[i]=='W') c++;
            if(s[i-k]=='W') c--;
            a=min(c,a);
           }
           cout<<a<<'\n';
       }

return 0;

}
