#include<bits/stdc++.h>
using namespace std;
int s;
int main()
{
	cin>>s;
	while(s--)
	{
		int a,b;
		cin>>a>>b;
		if(a==b){
            cout<<0<<'\n';
		}
		else if(a<b && a%2==0 && b%2==0){
            cout<<2<<'\n';
		}
		else if(a>b && a%2!=0 && b%2!=0){
            cout<<1<<'\n';
		}
		else if(a<b && a%2==0 && b%2!=0){
            cout<<1<<'\n';
		}
		else if(a>b && a%2==0 && b%2!=0){
            cout<<2<<'\n';
		}
		else if(a>b && a%2==0 && b%2==0){
            cout<<1<<'\n';
		}
		else if(a>b && a%2!=0 && b%2==0){
            cout<<2<<'\n';
		}
		else if(a<b && a%2!=0 && b%2==0){
            cout<<1<<'\n';
		}
		else if(a<b && a%2!=0 && b%2!=0){
            cout<<2<<'\n';
		}
	}
}
