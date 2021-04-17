#include<iostream>
using namespace std;
int n,i,x;
int main( ) {
    cin>>n;
	for(x=10,i=1;i<=n;i++)
    x=x+x/3;
	cout<<x<<endl;
    return 0;
}
