#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p,e, h;
        cin>>p>>e>>h;
        if(e*1+h*2>=p)cout<<"Qualify"<<endl;
        else cout<<"NotQualify"<<endl;
    }return 0;
}
