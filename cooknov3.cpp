#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int k;
		cin>>k;
		vector<int> arr;
		for(int i=1;i<=k*2;i+=2){
			arr.push_back(i+2);
		}
		for(auto it:arr ){
			cout<<it<<" ";
		}
		cout<<endl;
	}
}