#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin>>num;
	while(num--){
		int x,y;
		cin>>x>>y;
		if(y==0){cout<<x<<endl;}

		else if(x==y){
			cout<<(y*2)-1<<endl;
		}
		else{cout<<y*2+(x-y)<<endl;}
	}
}