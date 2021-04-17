#include <iostream>
using namespace std;
const int STUPID_HU=10000;
int main() 
{
	int a[STUPID_HU];
	int i,n,k;
	cin>>n>>k;
	for (i=0;i<n;i++)
	cin>>a[i];
	for (i=1;i<=k;i++) {
		cout<<a[n-i]<<" ";
	}
	return 0;
}

