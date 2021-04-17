#include<iostream>
using namespace std;
int n,i=10;
int main( ) {
    cin>>n;
    for( ;i>=n;i+=i/3 )
	    cout<<i<<endl;
	return 0;
}      
