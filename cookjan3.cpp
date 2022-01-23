#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;

	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		string s;
		for(int j=0;j<n;j++){
			s =s+char('a'+(j%26));
		}
		cout<<s<<endl;
	}
	}
