#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin>>t;
	     while(t--){
            int n; cin>>n;
            string s; cin>>s;
            int ans=n-1,l=1,r=n;
            while(s[l]=='B'){
                l++;
                ans--;
            }
            while(s[r]=='A'){
                r--;
                ans--;
            }
            cout<<max(ans,0)<<'\n';
	     }

}

