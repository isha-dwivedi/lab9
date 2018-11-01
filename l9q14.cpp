//Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. 
#include<iostream>
using namespace std;
int main()
{
	char st[20];//declare the string
	cout<<"enter the string"<<endl;
	cin>>st;
	char *ptr;//declare the pointer
	ptr=st;//keeping address of string in ptr
	while(*ptr!=0)
	{
		cout<<*ptr<<endl; //cout the value of ptr
		ptr++; //increasing the position of ptr
	}
}
