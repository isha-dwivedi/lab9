//Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.
#include<iostream>
#include<string>
using namespace std;
int myStrLen(char*cstring)
{	int i=0;
	char *pt;//declaring a new pointer
	pt=cstring; //includes size if cstring
	while (*pt != '\0') { //loop to count lenght
      i++;
      pt++;}
	return i;
	
   }
int main()
{
	char cstring[20];
	int l;
	cout<<"enter the string"<<endl;
	cin>>cstring;
	l=myStrLen(cstring);
	cout<<"lenght of string is:"<<l<<endl;


}

