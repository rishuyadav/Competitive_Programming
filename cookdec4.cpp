#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		cin	>>a[i];

	sort(a.begin(),a.end());
	cout<<a[n/2]-a[n/2-1]<<"\n";
}
return 0;
}