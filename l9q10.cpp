//Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.
#include<iostream>
#include<string>
using namespace std;
void revString(char* ptr)
{	char *pt,rev;
	int i;
	pt=ptr;
	while(*pt!='\0')
	{	i++;
		pt++;
	}
	pt+=i;
	while(*pt!='\0')
	{
	cout<<*pt;
	pt--;
	}
}
	
	


int main()
{
  char s[10] = "abcde";
  revString(s);  // call the function
  return 0;
}


