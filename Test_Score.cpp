#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, y;
        cin>>n>>x>>y;
        bool yes=0;
        for(int i=1; i<=n; i++){
            if(x*i==y || y==0){
                yes=1;
                break;
            }
        }
        if(!yes)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }return 0;
}
