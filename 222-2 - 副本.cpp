#include<iostream>
using namespace std;
int main() { 
    int a;
    cin>>a;
    int m;
    int as,am;
    as=a/7;
    am=a%7;
    m=as*31;
    int t=7,mu=0,cnt=0;
	for (;cnt<am;t--) {
	mu=mu+t;
	cnt++;
	}
	m=m+mu+3;
	cout<<m<<endl;
	return 0;
}
