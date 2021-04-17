#include<iostream>
using namespace std;
int maxx(double a,double b,double c){
     cout<<max(max(a,b),c)<<endl;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
	maxx(a,b,c); 
    return 0;
}
