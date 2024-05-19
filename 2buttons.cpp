#include<bits/stdc++.h>
using namespace std;
#define int long long
#define Levi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void soln(){
    Levi

    int n,m; cin>>n>>m;
    int c=0;

    if(n>=m){
        cout<<n-m<<'\n';
    }
    else{

    while(n!=m){
        if(m>n && (m%2==0)) m/=2;
        else m++;
        c++;
    }

     cout<<c<<'\n';
    }


}

int32_t main(){

       soln();


return 0;

}

