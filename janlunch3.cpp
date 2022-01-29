#include<bits/stdc++.h>
using namespace std;
int main (){
	int num;
	cin>>num;
	while(num--){
		int n,k,ans ;
		cin>>n>>k;
		if(n ==1 and k==1){
			cout<<1<<endl;

		}
		else{
			if(k<2 or k>n){
				cout<<-1<<endl;
			}
		else{
			for(int i =0;i<k-1;i++){
				cout<<i+1<<" ";
				ans =i;
			}
			for(int i =0;i<n-ans-1;i++){
				cout<<n-i<<" ";
			}
			cout<<endl;
		}
		}
	}
}