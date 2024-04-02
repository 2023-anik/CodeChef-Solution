#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cpp_int prod=1;
	    for(int i=n;i>0;i--){
	        prod=prod*i;
	    }
	     
	    cout<<prod<<endl; 
	}
	
	return 0;
}
