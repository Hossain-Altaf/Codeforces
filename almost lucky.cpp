#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;  cin>>t;
    int c=0,a=0;

    if(t%4==0 || t%7==0){
        cout<<"YES\n";
    }
    else{
        while(t>0){
                t=t/10;
                a++;
            if(t%10==4){
                c++;
            }
            else if(t%10==7){
                c++;
            }

        }
        if(a==c){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }



}

