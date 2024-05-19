#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Mikasa() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool s(int x){
    return x>0;
}

void soln(){
    Mikasa()

    int t; cin>>t;

  while(t--){
    int n; cin>>n; 
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int ans=0;
    for(int i=0; i<n; i++){
        int j=i;
        int m=v[i];

        while(j<n && s(v[i])==s(v[j])){
              m=max(m,v[j]);
              j++;
        }

        i=j-1;
        ans+=m;
    }

    cout<<ans<<'\n';
  }


}

int32_t main(){

      //int t; cin>>t;
      soln();


return 0;

}
