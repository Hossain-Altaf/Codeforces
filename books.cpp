#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Capt_Levi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void soln(){
    Capt_Levi

    int n,t,s=0,c=0,j=0; cin>>n>>t;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    //sort(v.begin(),v.end());

    for(int i=0;i<n;i++){

        s+=v[i];

        if(s<=t) c++;
        else{
            s-=v[j];
            j++;
        }

    }
    cout<<c<<'\n';


}

int32_t main(){

      //int t; cin>>t;
      soln();


return 0;

}

