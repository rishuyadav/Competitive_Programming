#include<iostream>
#include<math.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        double ans = pow(0.143*n,n);
        if(ans - floor(ans)<0.5){
            cout<<floor(ans)<<endl;
        }
        else{
            cout<<floor(ans)+1<<endl;
        }
    }
}