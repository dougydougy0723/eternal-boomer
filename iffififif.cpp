#include<iostream>
using namespace std;
int a;
int main() {
   cin>>a;
   if (a>=100) {
      a=a/10*7;
      cout<<a*10<<endl;
   }
   else if (a>=50) {
      a=a/10*8;
      cout<<a*10<<endl;
   }  
   else 
   cout<<a*10<<endl;
   return 0;
}
