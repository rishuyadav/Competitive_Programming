#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	while(n--){
		int num,cp,sp;
		cin>>num>>cp>>sp;
		cout<<(num*sp)-(num*cp)<<endl;
	}

}