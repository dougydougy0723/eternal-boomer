#include<iostream>
using namespace std;
int main() {
	int y,m,d;
	cin>>y>>m;
	if (m==1||m==3||m==5||m==7||m==8||m==10||m==12) 
	    d=31;
	else if (m==4||m==6||m==9||m==11) 
	    d=30;
	else if (((y%100!=0)&&(y%4==0)||(y%400==0))&&(m==2))
	    d=29;
    else  
	d=28;
	cout<<d<<endl;
	return 0;
}
