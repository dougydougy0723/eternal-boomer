#include<iostream>
using namespace std;
int main () {
   int n;
   cin>>n;
   if (n==1)
        cout<<1<<endl;
   else if (n==2)
        cout<<2*2<<endl;
   else if (n==3)
        cout<<3*3*2*2<<endl;
   else if (n==4)
        cout<<4*4*3*3*2*2<<endl;
   else if (n==5)
        cout<<5*5*4*4*3*3*2*2<<endl;
   else 
        cout<<"Error"<<endl;
	return 0;
}
        
