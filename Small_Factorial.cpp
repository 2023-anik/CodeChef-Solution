#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int facto=1;
        for(int i=1; i<=n; i++){
            facto*=i;
        }
        cout<<facto<<endl;
    }return 0;
}