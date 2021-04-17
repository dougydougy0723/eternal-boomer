#include<iostream>
using namespace std;
const int zsz=100;
int main() 
{
    int f[zsz];
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>f[i];
	int big=f[0];
	for(i=1;i<n;i++)
	    big=max(big,f[i]);
	for(i=0;i<n;i++)
		if(f[i]!=big)
			cout<<f[i]<<" "; 
	return 0;
} 
