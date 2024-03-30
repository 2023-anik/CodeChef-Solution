#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int n, m;
        cin>>n>>m;
        int k=0;
        while(m>k){
            m--;
            k++;
        }cout<<m+1<<endl;
	}
	return 0;
}
