#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int pa, pb, qa, qb;
        cin>>pa>>pb>>qa>>qb;
        int px, qx;
        if(pa>=pb)
            px=pa;
        else
            px=pb;
        if(qa>=qb)
            qx=qa;
        else
            qx=qb;
        if(qx>px)
            cout<<"P"<<endl;
        else if(px==qx)
            cout<<"TIE"<<endl;
        else
            cout<<"Q"<<endl;
	}
	return 0;
}
