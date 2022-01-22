#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
    	vector<int> arr;
    	int size,temp;
    	cin>>size;
    	if(size<3){cout<<0<<endl;continue;}
    	for(int i=0;i<size;i++){
    		cin>>temp;
    		arr.push_back(temp);
    	}
    	auto max = *max_element(arr.begin(),arr.end());
    	auto min =*min_element(arr.begin(),arr.end());
    	arr.erase(max_element(arr.begin(),arr.end()));
    	auto secondmax = *max_element(arr.begin(),arr.end());

    	cout<<(max-min)* secondmax<<endl;
    	// cout<<max<<" " <<secondmax <<" "<<min;
    	


    	

    }
}