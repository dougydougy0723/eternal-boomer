#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	for (int i=0;i<=s.size();i++){
	if (s[i]>='a'&&s[i]<'z')
	    s[i]+=1;
	else if (s[i]=='z')
	    s[i]='a';
}
	cout<<s<<endl;
	return 0;
}
	
