#include<iostream>
using namespace std;
int main( ) {
   double h=1,n,cnt=0;
   cin>>n;
    while(h<n*1000)
    {
    	h=h*2;
    	cnt++;
	}
	cout<<cnt<<endl;
    return 0;
}
