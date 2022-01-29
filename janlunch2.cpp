#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin>>k;
	while(k--){
		int n,x,y;
		cin>>n>>x>>y;
		int a[1000];
		int b[1000];
		for(int i=0;i<n;i++){
			
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		bool tag = true;
		for(int i=0;i<n;i++){
			if(b[i]==a[i]+x||b[i]==a[i]+y){
				continue;
			}
			else{tag = false;}
		}
		if(!tag){cout<<"NO\n";}
		else{cout<<"YES\n";}

	}
}