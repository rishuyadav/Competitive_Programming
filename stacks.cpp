#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	stack<int> stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	stack.push(6);
	stack.pop();
	cout<<"Top "<<stack.top()<<endl;
	cout<<"Size " <<stack.size()<<endl;
	while(!stack.empty()){
		cout<<stack.top()<<' ';
		stack.pop();
	}
	cout<<endl<<stack.size();
}