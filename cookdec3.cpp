// C++ program to find factors of a number using loops

#include <iostream>
#include<math.h>
using namespace std;

int factors(int num){
int i,count = 0;
for(i = 1; i <= sqrt(num); i++)
{
if(num % i == 0)
{
	if(num/i==i){count++;}
		else{count=count+2;}
}
}
return count;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		int k;
		cin>>k;
		int ans =factors(k-1);
		cout<<ans<<endl;
	}

}

