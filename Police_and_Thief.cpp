#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int x, y;
        cin>>x>>y;
        int max;
        int min;
        if(x>y){
            max=x;
            min=y;
        }
        else{
            max=y;
            min=x;
        }
        cout<<max-min<<endl;
	}
	return 0;
}