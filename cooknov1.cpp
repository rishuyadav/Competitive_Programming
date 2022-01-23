
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	while(n--){
		int a,b;
		cin>>a>>b;
		if((a+b)%2!=0)
			cout<<"Alice\n";
		else
			cout<<"Bob\n";
	}

}