#include<iostream>
const char a;
const char x;
int main() {
   a="stupid";
   while (0){
       cout<<"How is Zhaolei?"<<endl;
       cin>>x;
       if (x!=a) break;
   }
   return 0;  
}
