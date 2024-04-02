#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int y=ceil(static_cast<double>(x)/3);
        cout<<(y*3)-x<<endl;
    }
    return 0;
}