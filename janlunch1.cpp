#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	int a,b,c;
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if(a==b+c||b==c+a||c==a+b){
			cout<<"YES\n";
		}
		else{cout<<"NO\n";}
	}

}