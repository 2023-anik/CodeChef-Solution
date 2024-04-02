#include<iostream>
#include<cmath>
using namespace std;

bool check_prime(int a){
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0)
            return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(check_prime(a+b))
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
    }
    return 0;
}