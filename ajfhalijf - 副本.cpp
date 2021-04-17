#include<iostream>
using namespace std;
int main() {
	int n,s,cnt=0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>s;
		s+=30;
		if (s>=105) cnt--;
	}
	cout<<cnt<<endl;
	return 0; 
} 
