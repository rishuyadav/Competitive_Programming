#include<iostream>
using namespace std;
int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	while(n--){
		int k;
		cin>>k;
		if(k%2==0){cout<<k<<"\n";}
		else{cout<<k-1<<"\n";}
	}
}