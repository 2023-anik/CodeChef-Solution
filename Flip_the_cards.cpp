#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int n, x;
        cin>>n>>x;
        cout<<min(n-x, x)<<endl;
	}
	return 0;
}