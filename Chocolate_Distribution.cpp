#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1 || n==2)cout<<"1 "<<n<<endl;
        else if(n%2==0)cout<<n/2<<' '<<n<<endl;
        else if(n%2!=0)cout<<(n/2)+1<<' '<<n<<endl;
    }return 0;
}
