#include<iostream>
#include<bits/stdc++.h>
using  namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k;
	cin>>k;
	while(k--){
		int n,a;
		cin>>n>>a;
		int un = n-a;
		cout<<min(un,a)<<endl;

	}
}