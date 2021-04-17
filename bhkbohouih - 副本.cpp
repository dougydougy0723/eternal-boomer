#include<iostream> 
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	cout<<a<<" "<<b<<endl;  //输出变量的值 
	a+=b;
	b=a-b;
	a-=b;
	cout<<a<<" "<<b<<endl;  //输出交换后的值 
	return 0;
}
