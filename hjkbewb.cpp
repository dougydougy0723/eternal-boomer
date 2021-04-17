#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double a,b,h;
	cin>>a>>b>>h;
	cout<<fixed<<setprecision(2)<<a*b*h;
	return 0;
}
