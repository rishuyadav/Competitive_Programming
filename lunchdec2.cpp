#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int num;
		int zerocount=0;
		int onecount=0;
		cin>>num;
		string bin;
		cin>>bin;
		for(int i =0;i<num;i++){
			if(bin[i]=='0'){zerocount++;}
			else{onecount++;}
		}
		if(onecount==0||zerocount==0){cout<<0<<endl; continue;}
		cout<<min(onecount,zerocount)-1<<endl;
	}
}