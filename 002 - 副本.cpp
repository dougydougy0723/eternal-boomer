#include<iostream>
using namespace std;
const int XX=100;
int main() {
    int n,a[XX];
	cin>>n;
	for (int i=0;i<n;i++)  
	    cin>>a[i];
    int small=a[0];
	for(int w=0;w<n;w++) 
	    small=min(small,a[w]);
	int big=a[0];
	for(int e=0;e<n;e++)    
		big=max(big,a[e]);
	for(int q=0;q<n;q++){
		if(a[q]!=big&&a[q]!=small)
			cout<<a[q]<<" "; 
    }
	return 0;
} 
