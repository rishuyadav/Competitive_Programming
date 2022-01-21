#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x1,y1,x2,y2;
	while(n--){
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2|| y1==y2){
		cout<<"YES\n";

	}
	else{cout<<"NO\n";}
}
}