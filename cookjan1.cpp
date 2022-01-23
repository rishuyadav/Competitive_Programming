#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		if(y<=x){
			cout<<"PIZZA\n";
		}
		else if(z<=x){
			cout<<"BURGER\n";
		}
		else{cout<<"NOTHING\n";}
	}

}