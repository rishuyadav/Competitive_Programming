#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,k;
		cin>>n>>x>>k;
		if(k>x){cout<<-1<<"\n";}
		else{
			int check =0;
			for(int i =0;i<n;i++){
				if(check == k){check =0;}
				cout<<check<<" ";
				check++;
			}
			cout<<endl;
		}
		
	}
}