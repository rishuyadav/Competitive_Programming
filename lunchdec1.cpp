#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
	int x,y,z;
	cin>>x>>y>>z;
	if(x+y<z)
		cout<<"PLANEBUS\n";
	else if(z<x+y)
		cout<<"TRAIN\n";
	else if(x+y==z)
		cout<<"EQUAL\n";
}
}