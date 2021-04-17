#include<iostream>
using namespace std;
int gcd(int x,int y){
    int tmp;
    tmp=x%y;
    while (tmp!=0){
		x=y;
		y=tmp;
		tmp=x%y;
	}
    return y; 
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
}
