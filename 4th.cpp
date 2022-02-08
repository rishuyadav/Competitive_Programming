#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int a[n],sum =0;
		for(int i =0;i<n;i++){
			cin>>a[i];
			sum+=a[i];

		}
		int mx = *max_element(a,a+n);
		double p =(double)(sum-mx)/(n-1);
		p +=mx;
		cout<<fixed<<setprecision(10)<<p<<"\n";

	}
	return 0;
}
